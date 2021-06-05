#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
	int data;
	Node *next;	
};

Node *head=NULL; 

void display()
{
Node *p = head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
 cout<<endl;
}

void DetectLoop()
{
	Node *slow,*fast;
	slow=head;
	fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(slow==fast)
			return 1;
	}
	return 0;
}

void InsertAtBegin(int val) 
{
	Node *temp=new Node();
	temp->data=val;
	temp->next=head;
	head=temp;

}

int main()
{
  	InsertAtBegin(1);
  	InsertAtBegin(2);
  	InsertAtBegin(5);
  	InsertAtBegin(9);
  	InsertAtBegin(11);
  	InsertAtBegin(13);
  	InsertAtBegin(3);
  	InsertAtBegin(7);
  	InsertAtBegin(6);
//No loops 
//Check how to create loops in the linked list
DetectLoop();
display();

  return 0;
}