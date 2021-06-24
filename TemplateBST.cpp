#include <iostream>
using namespace std;

class BSTNode
{
public:
    int data;
    BSTNode*left;
    BSTNode*right;
};

typedef BSTNode bst; 

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
    int n;
    cin>>n;
    bst * root=NULL; 
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        root=insert(root,val);
    }
    return 0;
}
