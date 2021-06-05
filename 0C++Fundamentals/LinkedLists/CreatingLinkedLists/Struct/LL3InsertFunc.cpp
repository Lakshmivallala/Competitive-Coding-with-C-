#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct Node
{
public:
  int data;
  struct Node *next;
};

struct Node *head=NULL;

void insert(int val)
{
  struct Node * t=new Node();
  //or 
  //struct Node * t= (struct Node *) malloc(sizeof(struct Node));

  t->data=val;
  t->next=head;
  head=t;
}

void display()
{
  struct Node *p=head;
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}

int main()
{
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);

  display();

  return 0;
}