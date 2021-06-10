#include<iostream>

using namespace std;

//OUTPUT:
//5 6 6 7 8 9 10 
//5 6 7 8 9 10 

//works on GFG

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};

Node * head;
Node * FindDup(Node *head)
{
	Node * temp=head,*prev=head;
	while(temp!=NULL)
	{
		if(temp->data!=prev->data)
		{
			prev->next=temp;
			prev=temp;
		}
		
			temp=temp->next;
	}
	if(prev!=temp)
	{
			prev->next=NULL;
	}
	return head;
}

void display()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void push(int data)
{
	Node *t=new Node(data);
	t->next=head;
	head=t;
}

int main()
{
	push(10);
	push(9);
	push(8);
	push(7);
	push(6);
	push(6);
	push(5);
	

	display();
	cout<<endl;
	FindDup(head);
	display();

  return 0;
}