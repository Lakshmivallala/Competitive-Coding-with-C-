#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// output: 4 3 1 2 
class Node
{
public:
	int data;
	Node *next;	
};

Node *head=NULL; //INITIALISING HEAD 

/*
Initially: head-> node1 -> node2 ---- ->NULL
Now, new node node3 must be inserted such that 
head -> node3 -> node1 -> node2 --- ->NULL
For this, create and insert data value into node3
node3->next to head (i.e node3->next=node1 since head points to node1, 
node3 also points to node1)
Now node3 and head point to node1
(head,node3)->node1->node2 ----- ->NULL
Now, change head address value to node3's address such that:
head->node3->node1->node2 ---- ->NULL
*/

void InsertAtBegin(int val) //val: data to be inserted into new node
{

	//create the new node to be inserted at the beginning of the linked list 
	Node *temp=new Node();
	//insert the data into it
	temp->data=val;

	//Point to first node
	temp->next=head;

	//point head to new node (temp)
	head=temp;

}

int main()
{
	//initialised head before main() 
  	Node *one= new Node();
  	Node *two= new Node();

  
 	one->data=1;
  	one->next=two;

  	head=one;

  	two->data=2;
  	two->next=NULL;

  	InsertAtBegin(3);
  	InsertAtBegin(4);

Node *p =head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
  

  return 0;
}