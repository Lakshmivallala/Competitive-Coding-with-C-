#include<iostream>

using namespace std;

// o/p
// Inorder before deletion: 
// 1 3 4 5 10 11 
// Inorder: 
// 1 3 4 10 11 


class BSTNode
{
public:
	int data;
	BSTNode*left;
	BSTNode*right;
};

BSTNode * FindMin(BSTNode * root)
{
	while(root->left!=NULL)
		root=root->left;
	return root;
}

BSTNode * newNode(int val) 
{
	BSTNode * temp=new BSTNode(); 
	(*temp).data=val; 
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
	if(root==NULL) 
	{
		root=newNode(val); 
	}
	else if(val<=root->data) 
	{
		root->left=insert(root->left,val); 
	}
	else
	root->right=insert(root->right,val);

	return root;
}

BSTNode * Delete(BSTNode* root,int val)
{
	if(root==NULL) return root;
	else if(val<root->data)
		root->left=Delete(root->left,val); //root->left may change, so put it into root->left=delete... to return it to root->left
	else if (val>root->data)
		root->right=Delete(root->right,val);
	//found the data '='
	else
	{
		//case 1: leaf node
		if(root->left ==NULL && root->right==NULL)
		{
			delete(root); //delete node from memory
			root=NULL;
		}
		//case 2: 1 child
		else if(root->left ==NULL)
		{
			BSTNode *temp=root; //store address of current node
			root=root->right;
			delete(temp);
		}
		else if(root->right ==NULL)
		{
			BSTNode *temp=root; //store address of current node
			root=root->left;
			delete temp;
		}
		//case 3: 2 children
		else
		{
			BSTNode * temp=FindMin(root->right); //find min in RST, temp stores address of this min node
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);

		}

	}
	return root;
}

void Inorder(BSTNode * root)
{
	if(root==NULL)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

int main()
{
	BSTNode * root; 
	root=NULL; 

	root=insert(root,5); 
	root=insert(root,10);
	root=insert(root,3);
	root=insert(root,4);
	root=insert(root,1);
	root=insert(root,11);

	cout<<"Inorder before deletion: "<<endl;
	Inorder(root);

	root=Delete(root,5);
	cout<<endl;
	cout<<"Inorder: "<<endl;
	Inorder(root);
	cout<<endl;

	return 0;
}