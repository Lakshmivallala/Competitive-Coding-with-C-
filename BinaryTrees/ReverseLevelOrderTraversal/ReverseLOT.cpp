#include<iostream>
#include<queue>

using namespace std;

//https://www.geeksforgeeks.org/level-order-tree-traversal/
//TC: O(n^2)

// O/p
// Level order traversal of tree: 
// 4 5 2 3 1 

class Node
{
public:
	int data;
	Node *left;
	Node *right;
};

void printCurrentLevel(Node * root,int level);
int height(Node * node);
Node * newNode(int val);

void printLevelOrder(Node * root)
{
	int h=height(root);
	int i;
	for(i=h;i>=1;i--)
		printCurrentLevel(root,i);
}

void printCurrentLevel(Node * root,int level)
{	
	if(root==NULL)
		return;
	if(level==1)
		cout<<root->data<<" ";
	else if(level>1)
	{
		printCurrentLevel(root->left,level-1);
		printCurrentLevel(root->right,level-1);
	}
}

int height(Node * node)
{
	if(node ==NULL)return 0;
	else
	{
		int lheight=height(node->left);
		int rheight=height(node->right);
		if(lheight>rheight)
			return (lheight+1);
		else
			return (rheight+1);
	}
}

Node* newNode(int val)
{
	Node * temp=new Node();
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;

	return (temp);
}

int main()
{
	Node * root=newNode(1);
	root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<"Level order traversal of tree: "<<endl;
    printLevelOrder(root);

	return 0;
}