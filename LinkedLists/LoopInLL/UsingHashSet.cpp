#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//OUTPUT:
//Loop

//Time complexity: O(n) (To traverse the loop)
//Space complexity: O(n) auxillary space for hashmap
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

bool DetectLoop(Node * head)
{
	unordered_set<Node *> visited;
  while(head!=NULL)
  {
    if (visited.find(head)!=visited.end())
    {
      return true;
    }
    visited.insert(head);
    head=head->next;
  }
  return false;
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
if(DetectLoop(head))
  cout<<"Loop ";
else
  cout<<"No Loop ";
// display(); //Infinite loop

  return 0;
}