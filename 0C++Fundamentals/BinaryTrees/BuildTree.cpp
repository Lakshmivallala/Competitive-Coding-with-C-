#include<iostream>

using namespace std;

//O/p: 4 2 1 5 3
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

int search(int inorder[],int start,int end, int cur)
{
	for(int i =start;i<=end;i++)
	{
		if(inorder[i]==cur)
			return i;
	}
	return -1;
}

Node * buildtheTree(int preorder[],int inorder[],int start,int end)
{
	static int ind=0;
	if(start>end)
		return NULL;
	int cur=preorder[ind];
	ind++;
	Node * temp=new Node(cur);
	if(start==end)
	{
		return temp;
	}
	int pos=search(inorder,start,end,cur);
	temp->left=buildtheTree(preorder,inorder,start,pos-1);
	temp->right=buildtheTree(preorder,inorder,pos+1,end);

	return temp;
}

void inorderPrint(Node *root)
{
	if(root==NULL)
		return;
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}
int main()
{
	int preorder[]={1,2,4,3,5};
	int inorder[]={4,2,1,5,3};

	Node * root=buildtheTree(preorder,inorder,0,4);
	inorderPrint(root);

  return 0;
}