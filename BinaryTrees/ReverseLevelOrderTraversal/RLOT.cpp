#include<iostream>
#include<queue>
#include<stack>

//A C Z B Q M

using namespace std;

class Node
{
public:
	char data;
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

Node * insert(Node * root, char val)
{
	if(root==NULL)
	{
		root=new Node();
		root->data=val;
		root->left=root->right=NULL;
	}
	else if (val<=root->data)
		root->left=insert(root->left,val);
	else
		root->right=insert(root->right,val);

	return root;
} 

int main()
{
	Node * root=NULL;
	root=insert(root,'M');
	root=insert(root,'B');
	root=insert(root,'Q');
	root=insert(root,'Z');
	root=insert(root,'A');
	root=insert(root,'C');

	reverseLevelOrder(root);

	return 0;
}