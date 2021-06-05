#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// output: 1 2 3 4 
class Node
{
public:
	int data;
	Node *next;	
};

Node *head=NULL; //INITIALISING HEAD 

/*
Initially: head-> node1 -> node2->NULL
Now, new node node3 must be inserted such that
head-> node1 -> node2 -> node3 -> NULL 
For this, create a new node node3, insert data value in it, and point it to NULL
since node3 is now the end of the linked list
head-> node1 -> node2->NULL and we have our node3 -> NULL
If linked list is empty, let head point to new node node3
(head->node3)
Else, we need to change the last node's (node2) link part to node3
We need to traverse the whole linked list to get to this node (node2)
For this, take a temp pointer at head (temp=head)
temp = temp->next until temp->next is not NULL 
(i.e till node2->next = NULL)
Now that we have traversed till node2 using temp, temp points at node2
Using temp, point it to node3: temp->next=node3; 
*/

void InsertAtEnd(int val) //val: data to be inserted into new node
{

	//create the new node to be inserted at the beginning of the linked list 
	Node *temp=new Node();
	//insert the data into it
	temp->data=val;

	//NULL in address part of node
	temp->next=NULL;

	if(head==NULL) //Linked list is empty, head is pointing to nothing
	{
		//then the new node is first element
		head=temp; //let head point to new node
	}
	else //Linked List not empty
	{
		Node *p=head; //let temporary p pointer point at head
		//traverse till node points to NULL
		while(p->next!=NULL) //if node's next is not null
		{
			p=p->next; //Keep traversing till we find NULL
		}
		p->next=temp; //Point to temporary node 
	}
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

  	InsertAtEnd(3);
  	InsertAtEnd(4);

Node *p =head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
  

  return 0;
}