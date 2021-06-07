#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//OUTPUT:
//Loop

//Time complexity: O(n) (To traverse the loop)
//Space complexity: O(1) no extra space

//This problem does not modify linked list data structure
//It uses a temporary node, if the node points to temp, it has a loop

class Node
{
public:
	int data;
	Node *next;	
  int flag; //additional element in linked linked 
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

bool DetectLoop(Node * head)
{
  Node *temp = new Node;
  while(head!=NULL)
  {
  	if(head->next==NULL)
  	{
  	return false; //if no loops exists in the LL
  	}
   	if(head->next==temp)
   	{
   		return true;
   	}
   	Node *nex=head->next;
   	head->next=temp;
   	head=nex;
  }
  return false;
}

void InsertAtBegin(int val) 
{
	Node *temp=new Node();
	temp->data=val;
  temp->flag=0;
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
if(DetectLoop(head))
  cout<<"Loop ";
else
  cout<<"No Loop ";
// display(); //Infinite loop

  return 0;
}