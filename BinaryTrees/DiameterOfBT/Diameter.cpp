#include<iostream>
#include<bits/stdc++.h>

//works here doesnt work on gfg

//https://www.youtube.com/watch?v=ey7DYc9OANo&t=3s

//O/p
//Diameter of the binary tree is 4

//TC: O(n^2)
using namespace std;


class Node
{
public:
	int data;
	Node * left, *right;
};

int height(Node * node)
{
	if(node==NULL)
		return 0;
	return 1+max(height(node->left),height(node->right));
}

int diameter(Node * tree)
{
	if(tree==NULL)
		return 0;
	int lht=height(tree->left);
	int rht=height(tree->right);

	int ldiameter=diameter(tree->left);
	int rdiameter=diameter(tree->right);

	return max(lht+rht+1,max(ldiameter,rdiameter));
}

Node* insert(int val)
{
    Node* node=new Node();
    node->data = val;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}

int main()
{
	Node* root = insert(1);
    root->left = insert(2);
    root->right = insert(3);
    root->left->left = insert(4);
    root->left->right = insert(5);
 
    cout << "Diameter of the binary tree is " <<
    diameter(root);

	return 0;
}