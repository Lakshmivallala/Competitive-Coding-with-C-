 #include<iostream>
#include<unordered_set>

using namespace std;

//OUTPUT:
//No output check
// O(n) on average 
//Compilation errors on GFG as well

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
    unordered_set<int> visited;
    Node * cur=head;
    Node * prev=NULL;
    while(cur!=NULL)
    {
        //if the value already exists
        if(visited.find(cur->data)!=visited.end())
        {
            prev->next=cur->next;
            delete(cur);
        }
        else
        {
            visited.insert(cur->data);
            prev=cur;
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
    

    // display();
    cout<<endl;
    FindDup(head);
    // display();

  return 0;
}


