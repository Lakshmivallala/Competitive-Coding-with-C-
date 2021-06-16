	#include<iostream>

using namespace std;

// Breadth First Traversal (Or Level Order Traversal)
// Depth First Traversals
// - Inorder Traversal (Left-Root-Right)
// - Preorder Traversal (Root-Left-Right)
// - Postorder Traversal (Left-Right-Root)

//4 2 1 7 5 8 3 6 

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

void inorder(Node * root)
{
	stack<Node *> s;
	Node * temp=root;
	while(!s.empty() || temp!=NULL)
	{
		if(temp!=NULL)
		{
			s.push(temp);
			temp=temp->left;
		}
		else
		{
			temp=s.top();
			s.pop();
			cout<<temp->data<<" ";
			temp=temp->right;
		}
	}
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


	inorder(root);
	cout<<endl;
  return 0;
}

