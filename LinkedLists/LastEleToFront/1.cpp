#include <iostream>

using namespace std;

// Output:
// 3  6  20  10  5  10  
// 10  3  6  20  10  5  

// Time complexity: O(n) where n = number of nodes in linked list

class Node
{
public:
	int data;
	Node *next;	
};

void push(Node **head, int val)
{
	Node * temp=new Node;
	temp->data=val;
	temp->next= *head;
	//point head to temp/new node
	*head=temp;
}

void moveFirst(Node **head) //pass by reference
//to modify the value
{
	if(*head==NULL || (*head)->next==NULL)
// Error when it was *head->next==NULL rather than (*head) : "error: request for member ‘next’ in ‘* head’, which is of pointer type ‘Node*’ (maybe you meant to use ‘->’ ?)"
		return;
	Node *last=*head;
	Node *secLast=NULL;

	while(last->next!=NULL)
	{
		secLast=last;
		last=last->next;
	}

	secLast->next=NULL;
	last->next=*head;
	*head=last;
}

void display(Node * head)
{
	while(head!=NULL)
	{
		cout<<head->data<< "  ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	Node * head=NULL;
	push(&head,10);
	push(&head,5);
	push(&head,10);
	push(&head,20);
	push(&head,6);
	push(&head,3);
	display(head);
	moveFirst(&head);
	display(head);

	return 0;
}
