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
	Node * p;
    p=head;
     Node * q=NULL;
    if(head==NULL || head->next==NULL)
    return head;
    while(p->next!=NULL)
    {
        if(p->data==p->next->data)
        {
            q=p->next->next;
            free(p->next);
            p->next=q;
        }
        else
        {
            p=p->next;
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