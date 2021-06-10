#include<iostream>
#include<unordered_map>

using namespace std;

//OUTPUT:
//5   6   7   8   9   10  

//doesn't work on GFG
//The map just checks for membership here
//It is however required to change/manipulate the linked list data

// Time Complexity: O(n)
// Space Complexity: O(n)
// Where n=number of nodes

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
	unordered_map<int,bool>	m;
	Node * temp=head;
	while(temp)
	{
		if(m.find(temp->data)==m.end())
		{
			cout<<temp->data<<"   ";
		}
		m[temp->data]=true;
		temp=temp->next;
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
	

	// display();
	cout<<endl;
	FindDup(head);
	// display();

  return 0;
}