#include<iostream>

using namespace std;

//Recursive approach

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
	Node * temp;
	if(head==NULL)
		return head;
	if(head->next!=NULL)
	{
		if(head->data==head->next->data)
		{
			temp=head->next;
			head->next=head->next->next;
			delete(temp);
			FindDup(head);
		}
		else
		{
			FindDup(head->next);
		}
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