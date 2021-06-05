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

void ReverseLL()
{
	//p- previous, c- current, n- next
	Node *p,*c,*n;
	p=NULL;
	c=head;
	while(c!=NULL)
	{
		n=c->next;
		c->next=p;
		p=c; //incrementing prev to cur
		c=n; //incrementing cur to next
	}
	head=p;
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

display();
ReverseLL();
display();

  return 0;
}