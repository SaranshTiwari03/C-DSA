#include<iostream>
using namespace std;



//Q1. multiple similar value written once as key and given repeat value:
// Cpp=2
// c=1
// java=2

/*
#include<map>
int main(){
     map<string,int>mp;
     int n;
     string s;
     cout<<"Enter value of N"<<endl;
     cin>>n;
     for(int i=0;i<n;++i){
        cin>>s;
        mp[s]++;
     }
     for(auto p:mp){

        cout<<p.first<<"="<<p.second<<endl;   

      }
}*/


// Q2. print any roman numeral's value
/*
#include<map>
int roman(string &s){
     map<char,int>mp;
     mp['I']=1;
     mp['V']=5;
     mp['X']=10;
     mp['L']=50;
     mp['C']=100;
     mp['D']=500;
     mp['M']=1000;
     int ans=0;
     for(int i=0;i<s.length();++i){
        if(mp[s[i]]<mp[s[i+1]]){
            ans=ans-mp[s[i]];
        }else{
            ans=ans+mp[s[i]];
        }
     }
     return ans;
}

int main(){
    string s="XX";
    cout<<roman(s);

}*/



//Q3. "Do your best" print best.
/*
#include<algorithm>
int main(){
    string s;
    cout<<"Enter you string";
    getline(cin, s);
    string s1="";
    int c=0;
    for(int i=s.length()-1;s[i]!=' ';--i){
        s1+=s[i];
    }
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
}
*/


//Q4 "Do Your Best" print "Best Your Do"
/*
#include<vector>
#include<algorithm>

void rev(string &a){
    string k;
    vector<string>v1;
    int c=a.length();
    for(int i =0;i<=c;++i){
        if(a[i]==' '|| i==c){
            k=k+' ';
            v1.push_back(k);
            k.clear();
        }else{
            k=k+a[i];
        }
    }
    reverse(v1.begin(),v1.end());
    for(auto p:v1){
        cout<<p;
    }
}

int main(){
    string s;
    cout<<"Enter your string"<<endl;
    getline(cin,s);
    rev(s);
   
}
*/

// Q5. balance parenthesis {([{}])}

// Q6 second largest number in an array.


// Q7 Shift Zero to last of array 
// TC:O(n)
// SC:O(1)

/*
#include<vector>
void mv(vector<int>&v,int n){
    int c=0;
    for(int i=0;i<n;++i){
        if(v[i]!=0)
        {
            v[c]=v[i];
            c++;
        }
    }
    while(c<n){
        v[c]=0;
        c++;
    }
    for(auto p:v){

        cout<<p<<"\t";
    }
}
int main(){
     vector<int>v{23,0,1,0,5,0,6,7};
     mv(v,v.size());

}
*/

// printing and poping in stack 

#define n 50   // predefine any keyword as your own given nickname.
class stk{
    int *arr;
    public: int top;
    public:stk(){
        arr=new int[n];
        top=-1;
    }
    void push(int a)
    {
        if(top==n-1){
            cout<<"overflow"<<endl;
            return;
        }
        top++;
        arr[top]=a;
    } 
    void pop()
    {
        if(top==-1){
            cout<<"No element to Pop"<<endl;
            return;
        }
        top--;
    }
    int tops(){
        if(top==-1){
            cout<<"No elements"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return -1;
    }
};

int main(){
    stk st;
    st.push(10);
    st.push(23);
    st.push(12);
    st.pop();
    
    cout<<"Top element is: "<<st.tops()<<endl;
    while(!st.empty()){
        cout<<st.tops()<<endl;
        st.pop();
    }

}
