#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//didnt declare insertfunction in this
//inefficient leads to a lot of traversal

class BSTNode
{
public:
	int data;
	BSTNode*left;
	BSTNode*right;
};

//returns true if all elements in the sub tree are lesser than the value val
bool isSubtreeLesser(Node *root,int val)
{ 
    //base case
    if(root==NULL) return true;
    //check if data in root is less than or equal to given value
    if(root->data<=val && isSubtreeLesser(root->left,val) && isSubtreeLesser(root->right,val)
      //value of root->left is less than root data, then checking if LST and RST of current node are lesser than val as well
      return true;
    else
      return false;
}
//returns true if all elements in the sub tree are greater than the value val
bool isSubtreeGreater(Node *root,int val)
{
    //could even write a function that sends max, if max > val, then it is greater than all values
    //base case
    if(root==NULL) return true;
    //check if data in root is greater than to given value
    if(root->data>val && isSubtreeGreater(root->left,val) && isSubtreeGreater(root->right,val)
      return true;
    else
      return false;
}

//return 1 if BT is a BST, else return 0 (since int, true/false for return type as bool)
int isBST(Node *root)
{
    //base case
    if(root==NULL)
    return true;

    if (isSubtreeLesser(root->left,root->data) 
        && isSubtreeGreater(root->right,root->data)
        && isBST(root->left) 
        && isBST(root->right)) 
    //check if LST has lesser and RST has greater value than root
    //we also have to check if the Subtrees are bst's (recursively)
            return true;//then yes
    else
    return false;

}

int main()
{
    BSTNode * root; //stores address of root node
	root=NULL; //setting pointer as null initially (i.e empty tree)
//or BSTNode * rootPtr=NULL;
	//rootptr or root are both only pointers, not the actual node
	//initialising a BSTNode* root means a pointer not the root node
	//another way is to just set root as a global variable

	root=insert(root,15); //or we can pass (&root,15) to 
	//change the value of root rather than returning root 
	//each time from newNode function

	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,35);
	root=insert(root,65);
	root=insert(root,35);

	int n;
	cout<<"Enter a number to search in the tree: "<<endl;
	cin>>n;
	if(search(root,n)==true)
	cout<<"Key found"<<endl;
	else
	cout<<"Key not found"<<endl;

	return 0;
}