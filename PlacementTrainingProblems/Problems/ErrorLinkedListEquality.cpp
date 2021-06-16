#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node	
{
public:
	int data;
	Node *next;	
	// Node(int val)
 //    {
 //        data = val;
 //        next = NULL;
 //    }
};

Node *head1=NULL; 
Node *head2=NULL; 

// void display(Node * head)
// {
// Node *p = head;
// while(p!=NULL)
// {
// 	cout<<p->data<< " ";
// 	p=p->next;
// }
//  cout<<endl;
// }

int equal(Node * head1, Node * head2)
{
	if(head1==NULL && head2==NULL)
		return 1;
	Node *t1,*t2;
	t1=head1;
	t2=head2;
	int flag=0;
	while(t1!=NULL && t2!=NULL)
	{
		if(t1->data!=t2->data)
		{
			flag=1;
			break;
		}
		else
		{
			t1->next;
			t2->next;
		}
	}
	if (flag)
		return 0;
	else
		return 1;
	return 1;
}

void push(int data, Node ** head)
{
    Node *t=new Node();
    t->next=*head;
    *head=t;
}

int main()
{

	push(10,&head1);
    push(9,&head1);
    push(8,&head1);
    push(7,&head1);
    push(6,&head1);
    push(6,&head1);
    push(5,&head1);


    push(10,&head2);
    push(9,&head2);
    push(8,&head2);
    push(7,&head2);
    push(6,&head2);
    push(6,&head2);
    push(5,&head2);

    // display(head1);
    // display(head2);
    cout<<equal(head1,head2);
  return 0;
}