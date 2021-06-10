 #include<iostream>
#include<unordered_map>

using namespace std;

//Merge sort: Preferred sorting method for linked lists
//It takes O(nlogn) to execute 
//quicksort- slower due to slower random access in linked lists
//heapsorts are completely impossible to sort linked lists

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


