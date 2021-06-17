#include<iostream>
#include<bits/stdc++.h>
#include<climits>

using namespace std;

//efficient 
//O(n)

class BSTNode
{
public:
  int data;
  BSTNode*left;
  BSTNode*right;
  BSTNode(int val)
    {
        data = val; //or this->data=val, this->left=NULL, this->right=NULL
        left = NULL;
        right = NULL;
    }
};

//return 1 if BT is a BST, else return 0 (since int, true/false for return type as bool)
int isBSTUtil(BSTNode *root, int minValue, int maxValue)
{
    //base case
    if(root==NULL)
    return 1;
    //violates min/max constraint
    if (root->data<minValue || root->data>maxValue) //data cant be lesser than INT_MIN
            return 0;
    return isBSTUtil(root->left,minValue,root->data-1) && 
    isBSTUtil(root->right,root->data+1,maxValue);

}

int isBST(BSTNode * root)
{
  return (isBSTUtil(root,INT_MIN,INT_MAX));
}

int main()
{
  //bt not bst
  //since 30 at left of 40, but right of 35, 30<35 invalid 
  // BSTNode *root = new BSTNode(15);
  // root->left = new BSTNode(20);
  // root->right = new BSTNode(35);
  // root->left->left = new BSTNode(40);
  // root->left->right = new BSTNode(30);

  BSTNode *root = new BSTNode(4);
  root->left = new BSTNode(2);
  root->right = new BSTNode(5);
  root->left->left = new BSTNode(1);
  root->left->right = new BSTNode(3);

  if(isBST(root))
    cout<<"BT is a BST"<<endl;
  else
    cout<<"BT is not a BST"<<endl;

  return 0;
}