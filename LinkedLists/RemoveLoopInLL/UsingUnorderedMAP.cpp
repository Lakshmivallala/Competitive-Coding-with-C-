#include<iostream>
#include<unordered_map>

using namespace std;

// m = i*n - k. Check below link for derivation of this formula
//https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/ 
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

void HashAndRemoveLoop(Node *head)
{
	unordered_map<Node *,int> m;
	Node *last=NULL;
	while(head != NULL)
	{
		if(m.find(head)==m.end())
		{
			m[head]++;
			last=head;
			head=head->next;
		}
		else
		{
			last->next=NULL;
			break;
		}
	}
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
  	InsertAtBegin(10);
  	InsertAtBegin(4);
  	InsertAtBegin(15);
  	InsertAtBegin(20);
  	InsertAtBegin(50);

//50 20 15 4 10 
  	 head->next->next->next->next->next = head->next->next; 
// display();
// 50 20 15 4 10 15 4 10 15 4 ---
HashAndRemoveLoop(head);
cout<<endl;
display(); //50 20 15 4 10 

  return 0;
}