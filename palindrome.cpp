#include<iostream>
using namespace std;
#include<algorithm>
//O(n) time complexity pallindrome
 int main(){
    string s1,s2;
    cout<<"enter name"<<endl;
    cin>>s1;
    s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"palindrome"<<endl;

    }else{
        cout<<"not a palindrome"<<endl;
    }
 }