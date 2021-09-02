#include<bits/stdc++.h>

using namespace std;

class avlnode{
    public:
    int data;
    avlnode* right=NULL;
    avlnode* left=NULL;
};

avlnode* rightrotate(avlnode* root){
    avlnode* x=root->left;
    avlnode* y=x->right;
    x->right=root;
    root->left=y;
    return x;
}

avlnode* leftrotate(avlnode* root){
    avlnode* x=root->right;
    avlnode* y=x->left;
    x->left=root;
    root->right=y;
    return x;
}

int l,r;
int height(avlnode* node){
    if(node==NULL)
    return -1;
    else{
    l=height(node->left);
    r=height(node->right);
    if(l>r)
    return l+1;
    else 
    return r+1;
    }
}

int balanced(avlnode* node){
    if(node==NULL)
    return 0;
    int lh= height(node->left);
    int rh= height(node->right);
    int bf=lh-rh;
    return bf;
}

avlnode* insert(avlnode* newnode, avlnode* node, avlnode* root){
    if(node==NULL)
    node=newnode;
    else if(newnode->data > node->data)
    insert(newnode, node->right, root);
    else if(newnode->data < node->data)
    insert(newnode, node->left, root);
    int bf=balanced(root);
    avlnode* newroot;
    if(bf>1 && root->left->data > newnode->data)
    newroot=rightrotate(root);
    else if(bf<-1 && newnode->data > root->right->data)
    newroot=leftrotate(root);
    else if(bf>1 && newnode->data > root->left->data){
    leftrotate(root->left);
    newroot=rightrotate(root);
    }
    else if(bf<-1 && newnode->data < root->right->data){
    rightrotate(root->right);
    newroot=leftrotate(root);
    }
    return newroot;
}

void levelorder(avlnode* node, queue<avlnode*> q){
    if(q.empty())
    return;
    cout<<node->data<<" ";
    q.pop();
    if(node->left!=NULL)
    q.push(node->left);
    if(node->right!=NULL)
    q.push(node->right);
    levelorder(q.front(), q);
}

int main(){
    avlnode* root=new avlnode;
    root->data=54;
    avlnode* newroot=root;
    avlnode* newnode=new avlnode;
    newnode->data=23;
    newroot=insert(newnode, newroot, newroot);
    avlnode* newnode1=new avlnode;
    newnode1->data=13;
    newroot=insert(newnode1, newroot, newroot);
    // avlnode* newnode=new avlnode;
    // newnode->data=33;
    // newroot=insert(newnode, newroot, newroot);
    // avlnode* newnode=new avlnode;
    // newnode->data=63;
    // newroot=insert(newnode, newroot, newroot);
    // avlnode* newnode=new avlnode;
    // newnode->data=56;
    // newroot=insert(newnode, newroot, newroot);
    // avlnode* newnode=new avlnode;
    // newnode->data=70;
    // newroot=insert(newnode, newroot, newroot);
    queue <avlnode*> q;
    q.push(newroot);
    cout<<endl<<"Level order is:";
    levelorder(newroot, q);
    return 0;
}