#include<iostream>
#include<queue>
#include<iterator>
using namespace std;

// double ended QUEUE:

int main(){
    deque<int>dq;
    deque<int>::iterator it;
    dq.push_back(10);
    dq.push_back(45);
    dq.push_front(33);

    for(it=dq.begin();it!=dq.end();++it){

        cout<<*it<<endl;
    }

    dq.pop_back();

    for(it=dq.end()-1;it!=dq.begin()-1;--it){

        cout<<*it<<endl;
    }


}