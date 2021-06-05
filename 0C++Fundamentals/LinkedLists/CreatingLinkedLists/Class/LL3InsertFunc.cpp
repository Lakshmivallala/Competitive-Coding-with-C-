#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Node
{
public:
  int data;
  Node *next;
};

Node *head=NULL;

void insert(int val)
{
  Node * t=new Node();
  t->data=val;
  t->next=head;
  head=t;
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