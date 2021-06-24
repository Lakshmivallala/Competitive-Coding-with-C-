#include <iostream>
using namespace std;

//I/p o/p:
// 7
// 50
// 30
// 20
// 40
// 70
// 60
// 80
// Enter key to be searched
// 65
// Predecessor: 60
// Successor: 70


class BSTNode
{
public:
    int data;
    BSTNode*left;
    BSTNode*right;
};

typedef BSTNode bst; 

void PreSuc(bst * root, bst * &pre,bst * & suc,  int key)
{
    if(root==NULL) return;
    if(root->data==key)
    {
        //max value in left subtree= predecessor
        if(root->left!=NULL)
        {
            bst * temp=root->left;
            while(temp->right)
                temp=temp->right;
            pre=temp;
        }
        //min value in right subtree= predecessor
        if(root->right!=NULL)
        {
            bst * temp=root->right;
            while(temp->left)
                temp=temp->left;
            suc=temp;
        }
        return;
    }
    //if key is smaller than root
    if(root->data>key) 
    {
        suc=root;
        PreSuc(root->left,pre,suc,key);
    }
    else
    {
        pre=root;
        PreSuc(root->right,pre,suc,key);
    }
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
    PreSuc(root,pre, suc,key);
    if(pre!=NULL)
        cout<<"Predecessor: "<<pre->data<<endl;
    else
        cout<<"No Predecessor"<<endl;

    if(suc!=NULL)
        cout<<"Successor: "<<suc->data<<endl;
    else
        cout<<"No Successor"<<endl;

    return 0;
}
