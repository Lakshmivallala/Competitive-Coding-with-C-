#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Floyd’s Cycle-Finding Algorithm

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
  	head->next->next->next=head; //creating a loop to validate
//No loops 
//Check how to create loops in the linked list
DetectLoop();
display();

  return 0;
}