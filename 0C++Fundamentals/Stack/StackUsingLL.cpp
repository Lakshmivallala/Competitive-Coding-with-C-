#include<iostream>
#include<climits>

using namespace std;

#define n 100

// O/P
// Pushed to stack 5
// Pushed to stack 15
// Pushed to stack 2
// Pushed to stack 23
// Pushed to stack 42
// 42
// 23

class StackNode
{
	//private members of class Stack
public:
	int data;
	StackNode * next;
};

StackNode * newNode(int data)
{
	StackNode * s=new StackNode;
	s->data=data;
	s->next=NULL;

	return s;
}

int isEmpty(StackNode * root)
{
	
	return !root; //if root exists
	//true if is empty: i.e root doesnt exist
	//!root = no root, then return true
}
//no need of isFull function since linked list is dynamic

void push(StackNode ** root, int val)
{
	StackNode* s=newNode(val);
	s->next=*root;
	*root=s;
	cout<<"Pushed to stack "<<val<<endl;
}

int pop(StackNode ** root)
{
	if(isEmpty(*root)) 
		return INT_MIN;
	StackNode * temp=*root;
	*root=(*root)->next;
	int popped=temp->data;
	delete(temp);

	return popped;
}

int peek(StackNode * root)
{
	if(isEmpty(root))
		return INT_MIN;
	return root->data;
}

int main()
{
	StackNode * root=NULL;
	push(&root,5);
	push(&root,15);
	push(&root,2);
	push(&root,23);
	push(&root,42);

	cout<<pop(&root)<<endl;
	cout<<peek(root)<<endl;

	return 0;
}