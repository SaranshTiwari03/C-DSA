#include<iostream>
#include<map>
using namespace std;

// Map (ordered)                                | Unorder Map

// 1. pair <key, value>                         | <key,value>
// 2. Follows red black tree                    | Hashing technique 
// 3. Key sorted                                | key unsorted
// 4. key Unique                                | key Unique
// 5. O(logn)                                   | O(1) insert,delete;

int main(){
 map<int,int>mp;
 mp.insert({101,22});
 mp.insert({102,18});  //insert format 1

 mp[201]=33; //insert format 2

 

 for(auto it=mp.begin();it!=mp.end();++it){
        cout<< it->first<<"\t"<<it->second<<endl;
 }

 auto f=mp.find(22);
 if(f==mp.end()){
    cout<<"found"<<endl;

 }else{
    cout<<"not found"<<endl;
 }

  auto f1=mp.find(102);
 if(f1!=mp.end()){
    mp.erase(f);

 }else{
    cout<<"not found"<<endl;
 }

  for(auto it=mp.begin();it!=mp.end();++it){
        cout<< it->first<<"\t"<<it->second<<endl;
 }

//mp.clear();
// mp.size();
//mp.max_size();


}