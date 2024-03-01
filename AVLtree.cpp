#include<iostream>
using namespace std;


// this is balanced tree //
class node
{
    public:int data;
    class node *l;
    class node *r;
    node(int d){
        data=d;
        l=NULL;
        r=NULL;
    }

     int height(node *h){
        if(h==NULL){
            return 0;
        }
        int left=height(h->l);
        int right=height(h->r);
        int result=max(left,right)+1;
        return result;
    }

    bool isbalance(node *h){
    if(h==NULL){
        return true;
    }
    bool left=isbalance(h->l);
    bool right=isbalance(h->r);
    bool diff=abs(height(h->l) - height(h->r))<=1;
    if(left && right && diff){
        return true;
    }else{
        return false;
    }
}
};
node *bst(node *root, int v)
{
    if(root==NULL){
        return new node(v);
    }
    if(v<root->data){
        root->l=bst(root->l,v);
    }else{
        root->r=bst(root->r,v);
    }

    return root;
}


int main(){

    
   node *root=NULL;
    root=bst(root,5);
    root=bst(root,2);
    root=bst(root,7);
    root=bst(root,9);
    root=bst(root,6);
    root=bst(root,32);
    root=bst(root,54);
    root=bst(root,64);
    root=bst(root,69);

    bool c= root->isbalance(root);

    if(c){
        cout<<"Tree is balanced";
    }else{
        cout<<"Tree is not balanced";
    }
}