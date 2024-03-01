#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(34);
    q.push(4);
    q.push(3);
    q.push(14);
    q.push(32);
  
    // it follows FIFO
    
     while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
     }

    cout<<q.back();
}