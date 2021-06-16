#include<iostream>

using namespace std;

// Breadth First Traversal (Or Level Order Traversal)
// Depth First Traversals
// - Inorder Traversal (Left-Root-Right)
// - Preorder Traversal (Root-Left-Right)
// - Postorder Traversal (Left-Right-Root)

//4 2 7 8 5 6 3 1 


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
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8

*/

	Node* root = new Node(1);
    root->left = new Node(2);
    (*root).right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

	postorder(root);
	cout<<endl;
  return 0;
}