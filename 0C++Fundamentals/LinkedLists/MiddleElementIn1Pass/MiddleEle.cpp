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

/*
2 PASS:
Traverse through LL, find number of elements 'n'
Traverse till n/2 and output middle element

1 PASS:
Use two pointers slow and fast, slow will move one element at a time, fast will 
move two elements. 

slow=slow->next and 
a. fast=fast->next
b. fast=fast->next or combining them to perform fast=fast->next->next 
We traverse till fast reaches end of list or the next element is end 
If n=even, fast can reach end, else, fast->next will be NULL
*/
void MidEle()
{
	Node *slow=head, *fast=head;
	if (head==NULL)
		cout<<"List is empty ";
	else
	{
		while(fast!=NULL && fast->next!=NULL) //traverse till end
		{
			slow=slow->next;
			fast=fast->next->next;
		}
	}
	cout<<slow->data<<endl;
	
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

Node *p =head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
 cout<<endl;


  	MidEle();

  return 0;
}