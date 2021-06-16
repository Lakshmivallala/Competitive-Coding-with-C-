#include<iostream>
#include<queue>
#include<stack>

//4 5 6 7 2 3 1 

using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;
};

void reverseLevelOrder(Node *root)
{
	stack<Node*> s;
	queue <Node*> q;
	q.push(root);
	//there is at least one node
	while(q.empty()==false)
	{
		root=q.front();
		q.pop();
		s.push(root);

		if(root->right)
			q.push(root->right);

		if(root->left)
			q.push(root->left);
	}
		while(s.empty()==false)
		{
			root=s.top();
			cout<<root->data<<" ";
			s.pop();
		}
}

Node * insert(int val)
{
	Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
  
    return (temp);
} 

int main()
{
	Node *root = insert(1);
    root->left        = insert(2);
    root->right       = insert(3);
    root->left->left  = insert(4);
    root->left->right = insert(5);
    root->right->left  = insert(6);
    root->right->right = insert(7);
  

	reverseLevelOrder(root);

	return 0;
}