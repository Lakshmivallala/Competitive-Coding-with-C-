#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct Node{
  int data;
  struct Node *next;  
};


int main()
{
//Creating nodes
  struct Node *head=NULL;
  struct Node *one=NULL;
  struct Node *two=NULL;

  head = new Node(); 
  one = new Node();
  two = new Node();

  head->data=1;
  head->next=one;
  one->data=2;
  one->next=two;
  two->data=3;
  two->next=NULL;

  cout<<head->data<<endl;
  cout<<one->data<<endl;
  cout<<two->data<<endl;

// O/p:
// 1
// 2
// 3

  return 0;
}