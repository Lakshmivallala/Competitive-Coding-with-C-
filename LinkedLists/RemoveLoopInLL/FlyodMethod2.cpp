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

//define this f below detectloop and see
void removeLoop(Node * n,Node *head)
{
	Node *p=n;
	Node *q=n;
	unsigned int k=1,i;
	//couting the looped elements
	while(p->next!=q)
	{
		p=p->next;
		k++;
	}
	p=head;
	q=head;
	for(i=0;i<k;i++)
	{
		q=q->next;
	}
	while(q!=p)
	{
		p=p->next;
		q=q->next;
	}
	while(q->next!=p)
		q=q->next;
	q->next=NULL;
}

int DetectLoop(Node *head)
{
	Node *slow,*fast;
	slow=head;
	fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			removeLoop(slow,head);
			return 1;
		}
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
  	InsertAtBegin(10);
  	InsertAtBegin(4);
  	InsertAtBegin(15);
  	InsertAtBegin(20);
  	InsertAtBegin(50);

//50 20 15 4 10 
  	 head->next->next->next->next->next = head->next->next; 
// display();
// 50 20 15 4 10 15 4 10 15 4 ---
DetectLoop(head);
cout<<endl;
display(); //50 20 15 4 10 

  return 0;
}