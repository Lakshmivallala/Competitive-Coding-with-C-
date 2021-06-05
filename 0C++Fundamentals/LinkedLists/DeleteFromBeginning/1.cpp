#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// output: 2 3 
class Node
{
public:
	int data;
	Node *next;	
};

Node *head=NULL; //INITIALISING HEAD 

/*
Initially: head-> one -> two-> three -> NULL
Now, node one must be deleted such that 
head -> two -> three ->NULL
For this, first create a pointer than points to the head i.e the first node (one)
(p,head)->one -> two-> three -> NULL
Now, change head value to head->next (i.e 2nd node or two)
Now, free the node that p is pointing to (i.e node one) to get
head -> two -> three ->NULL
*/

void DeleteAtBegin() //val: data to be inserted into new node
{
	if(head==NULL)
		cout<<"List is empty, can't delete anything!"<<endl;
	else
	{
		Node *p=head; //create p pointer and point it to head/first node
		head=head->next;
		delete p;
		// OR free(p);
	}
}

int main()
{
	//initialised head before main() 
  	Node *one= new Node();
  	Node *two= new Node();
  	Node *three= new Node();
  
 	one->data=1;
  	one->next=two;

  	head=one;

  	two->data=2;
  	two->next=three;

  	three->data=3;
  	three->next=NULL;

  	DeleteAtBegin();

Node *p =head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
  

  return 0;
}