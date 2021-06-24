#include <iostream>
using namespace std;

//o/p:
//The LCA node: 12
//For n=7, n elements: 20,8,22,4,12,10,14

//TC: O(h) where h is the height of the tree
//SC: O(1) 

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

bst * lca(bst * root, int n1, int n2)
{
    while(root!=NULL)
    {
        if(root->data > n1 && root->data > n2)
            root=root->left;
        else if(root->data <n1 && root->data <n2)
            root=root->right;
        else //easiest way will be root node if n1 and n2 are on opposite sub trees
            break;
    }

    return root;
}

int main() {
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    bst * root=NULL; 
    cout<<"Enter n elements"<<endl;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        root=insert(root,val);
    }

    int n1,n2;
    cout<<"Enter two elements from the tree to find their Lowest common ancestor"<<endl;
    cin>>n1>>n2;
    bst * t =lca(root, n1,n2);
    cout<<"The LCA node: "<<t->data<<endl;

    // getchar();
    return 0;
}
