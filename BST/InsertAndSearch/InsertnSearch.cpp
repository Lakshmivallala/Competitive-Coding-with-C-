#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class BSTNode
{
public:
	int data;
	BSTNode*left;
	BSTNode*right;
};

BSTNode * newNode(int val) //create node in heap
{
	BSTNode * temp=new BSTNode(); //creating new node using new operator for dynamic memory alloation
	//can use malloc as well
	(*temp).data=val; //dereferencing this pointer using asterisk operator to access class's fields
	//or simply temp->data=val;
	temp->left=temp->right=NULL;

	return temp;

}

bool search(BSTNode * root, int val)
{
	if(root==NULL)
	return false;
	else if(root->data==val)
	return true;
	else if(val<=root->data)
	return search(root->left,val);
	else 
	return search(root->right,val);
}

BSTNode * insert(BSTNode* root,int val)
{	
	if(root==NULL) //empty tree
	{
		root=newNode(val); //setting root address as address of new node
	}
	else if(val<=root->data) //assuming even nodes with value equal to root node go to left
	{
		//return address of new node and set it as left child
		root->left=insert(root->left,val); //insert at root->left with val
	}
	else
	root->right=insert(root->right,val);

	return root;
}

int main()
{
	BSTNode * root; //stores address of root node
	root=NULL; //setting pointer as null initially (i.e empty tree)
//or BSTNode * rootPtr=NULL;
	//rootptr or root are both only pointers, not the actual node
	//initialising a BSTNode* root means a pointer not the root node
	//another way is to just set root as a global variable

	root=insert(root,15); //or we can pass (&root,15) to 
	//change the value of root rather than returning root 
	//each time from newNode function

	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,35);
	root=insert(root,65);
	root=insert(root,35);

	int n;
	cout<<"Enter a number to search in the tree: "<<endl;
	cin>>n;
	if(search(root,n)==true)
	cout<<"Key found"<<endl;
	else
	cout<<"Key not found"<<endl;


	return 0;
}