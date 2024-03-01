#include<iostream>
using namespace std;

// also called as self reference structure//


/*
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int d){
        data=d;
        left=NULL;     // without these two pointer it will be called dungly or wild pointer.
        right=NULL;
    }

};
int main(){
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    cout<<root->left->left->data;
    cout<<root->left->data;
    cout<<root->left->right->data;
    cout<<root->data;
    cout<<root->right->data;

}
*/


// Binary tree using class //


/*
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
};
int main(){

    node *root=new node(10);
    root->l=new node(7);
    root->r=new node(20);
    root->l->r=new node(9);
    cout<<root->l->r->data<<"->"<<root->l->data<<"->"<<root->data<<"->"<<root->r->data<<endl;
}
*/


//trasversing in Inored Preorder Postorder//


/*
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
};

void preorder(node *root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";   
    preorder(root->l);
    preorder(root->r);
}
void postorder(node *root){
    if(root==NULL)
    return;
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<< " ";   
}
void inorder(node *root){
    if(root==NULL)
    return;
    inorder(root->l);
    cout<<root->data<<" ";   
    inorder(root->r);
}    

int main(){

    node *root=new node(10);
    root->l=new node(7);
    root->r=new node(20);
    root->l->r=new node(9);
    // cout<<root->l->r->data<<"->"<<root->l->data<<"->"<<root->data<<"->"<<root->r->data<<endl;
    cout<<"Preorder:"<<endl;
    preorder(root);
    cout<<endl<<"Postorder"<<endl;
    postorder(root);
    cout<<endl<<"Inorder"<<endl;
    inorder(root);

}
*/


// height/depth of a Binary tree//


 /*
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
};



int main(){

    node *root=new node(10);
    root->l=new node(7);
    root->r=new node(20);
    root->l->r=new node(9);
    root->l->l=new node(2);
    root->l->l->r=new node(6);
    root->l->l->l=new node(1);
    cout<<root->height(root);

}
 */


// To check if 2 trees are equal.//

/*
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

    bool isidenty(node *h1,node *h2){
    if(h1==NULL && h2==NULL){
        return true;
    }
    if(h1!=NULL && h2==NULL||h1==NULL && h2!=NULL){
        return false;
    }
    bool left=isidenty(h1->l,h2->l);
    bool right=isidenty(h1->r,h2->r);
    bool curval=h1->data==h2->data;
    if(left && right && curval){
        return true;
    }else{
        return false;
    }
}
};


int main(){

    node *root1=new node(10);
    root1->l=new node(7);
    root1->r=new node(20);

    node *root2=new node(10);
    root2->l=new node(7);
    root2->r=new node(20);

    bool c=root2->isidenty(root1,root2);

    if(c){
        cout<<"Trees are identical";
    }else{
        cout<<"Trees are not identical";
    }
}
*/


