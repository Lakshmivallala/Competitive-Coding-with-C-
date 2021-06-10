#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// m = i*n - k. Check below link for derivation of this formula
//https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/ 
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

void DetectAndRemoveLoop(Node *head)
{
	if (head==NULL || head->next==NULL)
	{
		return;
	}
	Node *slow,*fast;
	slow=head;
	fast=head;
	slow=slow->next;
	fast=fast->next->next;
	while(fast!=NULL && fast->next!=NULL)
	{
		if(slow==fast)
		{
			break;
		}
		slow=slow->next;
		fast=fast->next->next;
	}
	if(slow==fast)
	{
		slow=head;
		if(slow==fast)
		{
			while(fast->next!=slow)
			{
				fast=fast->next;
			}
		}
		else
		{
			while(slow->next!=fast->next)
			{
				slow=slow->next;
				fast=fast->next;
			}
		}
		fast->next=NULL;
	}
	
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
DetectAndRemoveLoop(head);
cout<<endl;
display(); //50 20 15 4 10 

  return 0;
}