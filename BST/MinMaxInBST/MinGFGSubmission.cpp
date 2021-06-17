#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Works on gfg

class Node
{
public:
	int data;
	Node *left,*right;
};

Node* newNode(int data) 
{ 
Node* temp = new Node();
temp->data = data; 
temp->left = NULL; 
temp->right = NULL; 
  
return(temp); 
} 

Node* insert(Node* node, int data) 
{ 
if (node == NULL) 
    return(newNode(data)); 
else
{ 
    if (data <= node->data) 
        node->left = insert(node->left, data); 
    else
        node->right = insert(node->right, data); 
    return node; 
} 
} 

int minValue(Node * root)
{
	while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}

int main()
{
	Node * root=NULL;
	root=insert(root, 4);
	insert(root, 2); 
	insert(root, 1); 
	insert(root, 3); 
	insert(root, 6); 
	insert(root, 5);

	cout<<minValue(root);

	return 0;
}