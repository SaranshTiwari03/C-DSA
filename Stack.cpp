#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(34);
    st.push(4);
    st.push(3);
    st.push(14);
    st.push(32);
    //There is only 1 way to display data in stack:
    // it follows LIFO
    
     while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
     }
}