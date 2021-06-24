#include <iostream>
using namespace std;

//I/p o/p:
// 7
// 50
// 20
// 60
// 10
// 30
// 55
// 70
// Enter key to be searched
// 55
// Predecessor: 50
// Successor: 60

class BSTNode
{
public:
    int data;
    BSTNode*left;
    BSTNode*right;
};

typedef BSTNode bst; 

void PreSuc(bst * root, int key, bst ** pre,bst ** suc)
{
    if(!root) return; //return if root is null
    PreSuc(root->left,key,pre,suc);
    //if root value is greater than the key, store in successor
        if(root&&root->data>key)
        {
            if((!*suc) || (*suc) && (*suc)->data>root->data)
            *suc=root;
        }
        //if root value smaller than key, store in predecessor
        else if(root && root->data<key)
        {
            *pre=root;
        }
        PreSuc(root->right,key,pre,suc);
}

bst* insert(bst* root,int val)
{    
    if(root==NULL) 
    {
        bst * temp=new bst(); 
        temp->data=val; 
        temp->left=temp->right=NULL;
        return temp;
        
    }
    if(val>root->data)
        root->right=insert(root->right,val); 
    else
        root->left=insert(root->left,val); 
    
    return root;
}

int main() {
    int n,key;
    cin>>n;
    bst * root=NULL; 
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        root=insert(root,val);
    }
    cout<<"Enter key to be searched"<<endl;
    cin>>key;
    BSTNode * pre=NULL, * suc=NULL;
    PreSuc(root,key,&pre, &suc);
    if(pre)
        cout<<"Predecessor: "<<pre->data<<endl;
    else
        cout<<"No Predecessor"<<endl;

    if(suc)
        cout<<"Successor: "<<suc->data<<endl;
    else
        cout<<"No Successor"<<endl;

    return 0;
}
