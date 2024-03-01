#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<pair<int,string>>p;
    int r,n;
    string name;
    cout<<"How many records"<<endl;
    cin>>n;
    for(int i=0;i<n;++i){
        cout<<"Enter roll no: \t";
        cin>>r;
        cout<<"Enter Name: \t";
        cin>>name;
        p.push_back(make_pair(r,name)); //or write p.push_back({r,name});
    }

    for(auto v:p){
        cout<<"RollNo.:"<<v.first<<"\t"<<"Name:"<<v.second<<endl;
    }

    
    return 0;
} 