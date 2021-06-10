#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
     struct Node * p;
    p=head;
    struct Node * q=NULL;
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