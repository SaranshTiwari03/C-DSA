// Syntax: std::array<T,N> array;

// NOTICE:
// 1.Std::array is a container that emcapsulates fixed size arrays.
// 2. arraysize is needed at compile time.
// 3 Assign by value is actually by value.
// 4.Access elments:
//  a. at()
//  b. []
//  c. front()
//  d. back()
//  e. data()



#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,5> myarray;

    array<int,5> marray={1,2,3,4,5};
    myarray={2,5,6,7,8};

    cout<<myarray.front()<<endl<<"Whole array line"<<endl;
    for(int i=0;i<myarray.size();++i){
        cout<<myarray.at(i);
    }
    return 0;
}