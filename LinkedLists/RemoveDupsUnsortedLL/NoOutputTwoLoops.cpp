 #include<iostream>
#include<unordered_map>

using namespace std;

//OUTPUT:
//No output
//Compilation errors on GFG as well
// Time Complexity: O(n^2)

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
    unordered_map <int,bool> um;
     Node *p=head,*q=head;
     while(p)
     {
         if(um.find(p->data)==um.end())
         {
             q=p->next->next;
             p=p->next;
         }
         return head;
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


