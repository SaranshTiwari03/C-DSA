#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v{12,34,5,7,81,3,8};
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});
    for(auto p:v){
        cout<<p<<endl;
    }
}