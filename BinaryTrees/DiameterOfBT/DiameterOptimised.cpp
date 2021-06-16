#include<iostream>
#include<bits/stdc++.h>

////https://www.youtube.com/watch?v=ey7DYc9OANo&t=3s

//O/p
//Diameter of the binary tree is 4

//We optimise the previous solution
//by calculating height in the same recursion

//TC: O(n)

using namespace std;


class Node
{
public:
	int data;
	Node * left, *right;
};

int diameterOptimised(Node * root,int *height)
{
	int lht=0,rht=0;
	int ldiameter=0,rdiameter=0;

	if(root==NULL)
	{
		*height=0;
		return 0; //since diameter also = 0
	}

	ldiameter=diameterOptimised(root->left,&lht);
	rdiameter=diameterOptimised(root->right,&rht);

	*height=max(lht,rht)+1;
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
 	int height=0;
    cout << "Diameter of the binary tree is " <<
    diameterOptimised(root,&height);

	return 0;
}