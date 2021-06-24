#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
You are given N values to be inserted into a binary search tree. Every value in the left subtree fo a node x must be less than or equal to x and every value in the right subtree of a node x must be greater than x.
You are to insert the N values into a binary search tree in the order that they are given. Print the resultant binary search tree's height.

Input Format

First line contains a number N. Next line contains N integers.

Constraints

1 <= N <= 1000

Output Format

Output one integer that is the height of the binary search tree.

Sample Input 0

10
2 8 5 1 10 5 9 9 3 5 
Sample Output 0

6
*/

//Double linked list
class BSTNode
{
public:
    int data;
    BSTNode*left;
    BSTNode*right;
};

typedef BSTNode bst; //bst will be replaced with BSTNode typedef: (alternate name)

bst* insert(bst* root,int val)
{    
    if(root==NULL) //empty tree
    {
        bst * temp=new bst(); 
        temp->data=val; 
        temp->left=temp->right=NULL;
        return temp;
        
    }
    if(val>root->data)
        root->right=insert(root->right,val); //make it the root->right after returning
    else
        root->left=insert(root->left,val); //includes val<=root->data
    
    return root;
}

int height( bst* node)
{
   if(node==NULL)
    return 0;
    else
    {
        int lh=height(node->left);
        int rh=height(node->right);
        if(lh>rh)
        return (lh+1);
        else
        return (rh+1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    bst * root=NULL; //declaring locally
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        root=insert(root,val);
    }
    cout<<height(root); //or can store it in a int variable and print it later
    return 0;
}
