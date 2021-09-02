
#include<bits/stdc++.h>

using namespace std;

class treenode{
    public:
    int data;
    treenode* left=NULL;
    treenode* right=NULL;
};

// void insertion(int data){
//     static int count=0;
//     if(count==0){
//         static treenode* root=new treenode;
//         root->data=data;
//     }
//     if(root->data<data){
//         treenode* node=new treenode;
//         root->left=node;
//         node->data=data;
//     }
//     else if(root->data>data){
//         treenode* node=new treenode;
//         root->right=node;
//         node->data=data;
//     }
// }

void preorder(treenode* node){
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(treenode* node){
    if(node==NULL)
    return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(treenode* node){
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    postorder(node->right);
    postorder(node->left);
}

void levelorder(treenode* node, queue<treenode*> q){
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

int l,r;
int height(treenode* node){
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

void rightview(treenode* node){
    cout<<node->data<<" ";
    if(node->right)
    rightview(node->right);
    else if(node->left)
    rightview(node->left);
    else 
    return;
}

int main(){
    treenode* root;
    root= new treenode;
    root->data=1;
    treenode* n1=new treenode;
    n1->data=2;
    root->left=n1;
    treenode* n2=new treenode;
    n2->data=3;
    root->right=n2;
    treenode* n3=new treenode;
    n3->data=4;
    n1->left=n3;
    treenode* n4=new treenode;
    n4->data=5;
    n2->right=n4;
    treenode* n5=new treenode;
    n5->data=6;
    n4->left=n5;
    treenode* n6=new treenode;
    n6->data=7;
    n4->right=n6;
    cout<<"Preorder is:";
    preorder(root);
    cout<<endl<<"Postorder is:";
    postorder(root);
    cout<<endl<<"Inorder is:";
    inorder(root);
    queue <treenode*> q;
    q.push(root);
    cout<<endl<<"Level order is:";
    levelorder(root, q);
    cout<<endl<<"height is:"<<height(root);
    cout<<endl<<"Right View of tree is:";
    cout<<root->data<<" ";
    rightview(root->right);

    return 0;
}

