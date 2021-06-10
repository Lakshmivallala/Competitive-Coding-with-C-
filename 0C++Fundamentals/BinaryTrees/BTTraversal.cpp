#include<iostream>

using namespace std;

// Breadth First Traversal (Or Level Order Traversal)
// Depth First Traversals
// - Inorder Traversal (Left-Root-Right)
// - Preorder Traversal (Root-Left-Right)
// - Postorder Traversal (Left-Right-Root)

class Node
{
public:
	int data;
	Node *left;
	Node *right;
	Node(int val)
	{
		data=val;
		left=right=NULL;
	}
};

void preorder(Node * root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node * root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(Node * root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int main()
{

/*
			 1
			/ \
		   /   \
		  2     3
		 / \   / \
		4   5 6   7
*/
	Node * root = new Node(1);
	root->left=new Node(2);
	(*root).right=new Node(3); 
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	// root->right->right=new Node(6); gets overwritten by 7 below
	root->right->right=new Node(7);

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
  return 0;
}