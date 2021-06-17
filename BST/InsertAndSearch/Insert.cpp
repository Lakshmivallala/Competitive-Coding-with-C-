#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//O/p
//10 20 35 35 50 65 
//this is an inorder traversal of the BST which is always sorted

class BSTNode
{
	int data;
	BSTNode*left;
	BSTNode*right;
public:
	BSTNode();
	BSTNode(int);
	BSTNode *insert(BSTNode*,int);
	void Inorder(BSTNode*);
};

BSTNode::BSTNode(): data(0), left(NULL), right(NULL)
{	}

BSTNode::BSTNode(int val)
{
	data=val;
	left=right=NULL;
}

BSTNode * BSTNode::insert(BSTNode* root, int val)
{
	if(!root)
		return new BSTNode(val);
	if(val>root->data)
		root->right=insert(root->right,val);
	else
		root->left=insert(root->left,val);

	return root;
}

void BSTNode:: Inorder(BSTNode * root)
{
	if(!root)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

int main()
{
	BSTNode bst, *root=NULL;
	root=bst.insert(root,50);
	root=bst.insert(root,10);
	root=bst.insert(root,20);
	root=bst.insert(root,35);
	root=bst.insert(root,65);
	root=bst.insert(root,35);

	bst.Inorder(root);

	return 0;
}