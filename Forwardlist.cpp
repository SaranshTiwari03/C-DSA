#include<iostream>
#include<Forward_List>
#include<iterator>
using namespace std;

int main(){
    forward_list<int>st;
    forward_list<int>fwd{100,500,300,500,600};
    st.push_front(34);
    st.push_front(22);
    st.push_front(344);
    st.push_front(234);
    st.push_front(90);

    forward_list<int>::iterator it=fwd.begin();
    // fwdl.insert_after(*ptr +1/-1,value);
    // st.insert_after(it,200);
   
     fwd.sort(); // first sort then unique
     fwd.unique(); // only removes adjacent similar value.
     while(it!=fwd.end()){
       cout<<*it<<endl;
       it++;
     }
    fwd.assign({220,634,765,908});
    cout<<endl<<"After assign"<<endl;
    forward_list<int>::iterator it2=fwd.begin();
     while(it2!=fwd.end()){
       cout<<*it2<<endl;
       it2++;
     }

     cout<<"Total elements:"<<distance(fwd.begin(), fwd.end())<<endl;

     fwd.resize(10);
      forward_list<int>::iterator it3=fwd.begin();
     while(it3!=fwd.end()){
       cout<<*it3<<endl;
       it3++;
     }

    fwd.clear();


}

/*
int main(){
    forward_list<int>sbi{100,500,300,500,600};
    forward_list<int>boi{101,523,490,90};

    forward_list<int>::iterator it1= sbi.begin();
    forward_list<int>::iterator it2= boi.begin();
    cout<<"Sbi eno:"<<endl;
     while(it1!=sbi.end()){
       cout<<*it1<<endl;
       it1++;
     }
     cout<<"Boi eno:"<<endl;
      while(it2!=boi.end()){
       cout<<*it2<<endl;
        it2++;
     }
    sbi.sort();
    boi.sort();// here it is merging and and sorting at the same time
     sbi.merge(boi);
    forward_list<int>::iterator it3= sbi.begin();
    cout<<"after merge"<<endl;
     while(it3!=boi.end()){
       cout<<*it3<<endl;
       it3++;
     }

    sbi.remove(100);
    forward_list<int>::iterator it4= sbi.begin();
    cout<<"after remove"<<endl;
     while(it4!=boi.end()){
       cout<<*it4<<endl;
       it4++;
     }
     sbi.remove_if([](int x){return x >200; });
     forward_list<int>::iterator it5= sbi.begin();
      cout<<"after remove if with condition"<<endl;
     while(it5!=boi.end()){
       cout<<*it5<<endl;
       it5++;
     }
     
}*/