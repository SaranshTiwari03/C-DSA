#include<iostream>
#include<unordered_map>
using namespace std;

// Map (ordered)                                | Unorder Map

// 1. pair <key, value>                         | <key,value>
// 2. Follows red black tree                    | Hashing technique 
// 3. Key sorted                                | key unsorted
// 4. key Unique                                | key Unique
// 5. O(logn)                                   | O(1) insert,delete;

int main(){
    unordered_map<int,int>mp;
 mp.insert({101,22});
 mp.insert({102,18});  //insert format 1

 mp[201]=33; //insert format 2


 

 for(auto it=mp.begin();it!=mp.end();++it){
        cout<< it->first<<"\t"<<it->second<<endl;
 }

}