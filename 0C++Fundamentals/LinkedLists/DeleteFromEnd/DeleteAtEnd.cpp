#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// output: 1 2 
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
head-> one -> two-> NULL
We traverse till the last node, free it, change the previous nodes next to NULL
For this, we use two pointers, one to reach last node, one to reach second last
Then change prev node's address to NULL and free p node
*/

void DeleteAtEnd() //val: data to be inserted into new node
{
	Node *p, *prev;
	//Empty
	if(head==NULL)
		cout<<"List is empty "<<endl;

	//One element
	else if(head->next==NULL)
	{
		//if only one node is present in the Linked List (one)
		p=head; //point to first node (one)
		head=NULL; //head is pointing to NULL, not to node(one) anymore
		free(p); //free or delete the node one that p is poiting to
	}

	//More than one
	else
	{
		p=head;
		while(p->next!=NULL) //reach 2nd last node
		{
			prev=p; //2nd last node
			p=p->next; //last node
		}
		prev->next=NULL;
		free(p); 
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

  	DeleteAtEnd();

Node *p =head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
  

  return 0;
}