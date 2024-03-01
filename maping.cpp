#include<iostream>
using namespace std;
#include<vector>
#include<map>

void vsub(vector<int>&v1,vector<int>&v2)
{    
    int f=1;
    map<int,int>mp;
    for(int i=0;i<v1.size();++i){
        mp[v1[i]]=i;
    }
    for(int j=0;j<v2.size();++j){
         if(mp.find(v2[j])==mp.end()){
            f=0;
         }
    }
      if(f){
        cout<<"this is a subset"<<endl;
      }else{
        cout<<"not a subset"<<endl;
      }
}



int main(){
    vector<int>v1{5,1,3,4,6};
    vector<int>v2{5,3,4,9};
    vsub(v1,v2);
}