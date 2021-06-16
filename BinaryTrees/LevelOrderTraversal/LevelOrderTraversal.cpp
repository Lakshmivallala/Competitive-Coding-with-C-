#include<iostream>
#include<queue>

using namespace std;

//TC: O(n)
//SC: Queue: assuming dynamic memory: O(1): best, O(n): Worst&Avg (n/2 max nodes)

//O/p:
//M B Q A C Z 

class Node
{
public:
	char data;
	Node *left;
	Node *right;
};

void LevelOrder(Node *root)
{
	if(root==NULL)
		return;
	queue <Node*> q;
	q.push(root);
	//there is at least one node
	while(!q.empty())
	{
		Node * temp=q.front(); // front() function returns a reference to the first element of the queue
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
		q.pop(); //remove the node
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

	LevelOrder(root);

	return 0;
}