#include<iostream>

using namespace std;

/*
Trees are called hierarchial data structures. They are non linear in nature 
A binary tree is a tree data structure that can have atmost 2 children 
(0, 1 or 2 children). The first node or the parent is called the root node.
Its direct descendants are called its children.

*/
//OUTPUT: 2

class Node
{
public:
	int data;
	Node *left;
	Node *right;
};

Node * create(int val)
{
	Node * temp=new Node; // new struct Node if you use struct
	temp->data=val;
	temp->left=NULL;
 	temp->right=NULL;

	return temp;
}

int main()
{
	//define root pointer
	Node * root = create(5); //root pointer is of Node type
	//function to create the node 
	//should return address of root node
	root->left=create(10);
	(*root).right=create(3); //root-> can also be written as (*root).

	root->left->left=create(9);
	root->left->right=create(2);

	root->right->right=create(6);


	// 		   5
	// 	10		      3
	// 9  2	         6

	//The below statements will print out the address
	//Point to data to avoid this
	// cout<<root->left->right<<endl;
	// cout<<root->left->right<<endl;

	cout<<root->left->right->data<<endl; //This outputs 2
	// cout<<root->right->left->data<<endl; ERROR since we didnt define or create any node
	//returns Segmentation fault (core dumped)



  return 0;
}