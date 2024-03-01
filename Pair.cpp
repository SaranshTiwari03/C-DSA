#include<iostream>
#include<vector>

using namespace std;
int main(){
    pair<int,string>p;
    pair<string,string>p2;
    p.first=101;
    p.second="roni";
    cout<<p.first<<","<<p.second<<endl;
    p2.first="Saransh";
    p2.second="Tiwari";
    cout<<p2.first<<","<<p2.second;
    
    return 0;
}

//pair is combination of key and value where first is considered to be key and second is value.