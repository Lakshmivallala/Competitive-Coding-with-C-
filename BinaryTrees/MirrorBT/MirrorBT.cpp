#include<iostream>
#include<queue>

using namespace std;

////https://www.youtube.com/watch?v=vdwcCIkLUQI

//o/p:
// Inorder of original BT: 
// 2 3 4 5 6 
// Inorder of mirror BT: 
// 6 5 4 3 2 

class Node
{
public:
	int data;
	Node *left;
	Node *right;
};

Node* newNode(int val)
{
	Node * temp=new Node();
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;

	return (temp);
}

void inorder(Node * root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<< " ";
	inorder(root->right);
}

void mirrorBT(Node * root,Node **mirror)
{
	if(root==NULL)
	{
		mirror=NULL;
		return;
	}
	*mirror=newNode(root->data);
	mirrorBT(root->left, &((*mirror)->right));
	mirrorBT(root->right, &((*mirror)->left));
}

int main()
{
	Node * tree=newNode(5);
	tree->left = newNode(3);
    tree->right = newNode(6);
    tree->left->left = newNode(2);
    tree->left->right = newNode(4);

    cout<<"Inorder of original BT: "<<endl;
    inorder(tree);
    cout<<endl;
    Node * mirror=NULL;
    mirrorBT(tree,&mirror);
    cout<<"Inorder of mirror BT: "<<endl;
    inorder(mirror);
    cout<<endl;

	return 0;
}