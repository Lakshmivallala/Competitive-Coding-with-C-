#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Floyd’s Cycle-Finding Algorithm

//OUTPUT: 6 7 3 13 11 9 5 2 1 

//Time complexity: O(n) to traverse the loop
//Space complexity: O(1) no extra space required

//Think of a circular track, if we have a slow and a fast runner where fast runner
//runs twice as fast as slow runner i.r slow = 2 * fast then consider the situation:
//Slow runner makes one round i.e fast runner makes 2 rounds from starting point
//Therefore, slow and fast runner meet at some point (beginning here)
class Node
{
public:
	int data;
	Node *next;	
};

Node *head=NULL; 

void removeLoop(Node *,Node *);

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

void removeLoop(Node * n,Node *head)
{
	Node * one;
	Node *two;
	one=head;
	while(true)
	{
		two=n;
		while(two->next!=n && two->next!=one)
		{
			two=two->next; 
		}
		if(two->next==one)
			break;
		one=one->next;
	}
	two->next=NULL;
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