#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//OUTPUT:
//Loop

//Time complexity: O(n) (To traverse the loop)
//Space complexity: O(1) no extra space

//This problem modifies linked list data structure
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
  while(head!=NULL)
  {
    if(head->flag==1)
      return true;
    head->flag=1;
    head=head->next;
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