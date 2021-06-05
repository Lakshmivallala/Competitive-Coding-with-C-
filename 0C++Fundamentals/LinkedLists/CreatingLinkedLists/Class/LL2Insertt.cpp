#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Node
{
public:
  int data;
  Node *next;

  //Constructor
  // Node(int val)
  // {
  //   data=val;
  //   next=NULL;
  // }
};


int main()
{
//Creating nodes
  //or Node *two= new Node(); 
  Node *head=NULL;
  Node *one=NULL;
  Node *two=NULL;
//allocating nodes in heap memory
  head = new Node(); //new = dynamic memory allocation in C++
  one = new Node();
  two = new Node();
//C uses malloc(), calloc() to allocate memory. free() to free this memory
//C++ can use malloc() calloc() OR new and delete easily
//new initialises memory and returns the address of initialised memory to pointer 
//variable

// PointerVariable=new DataType
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