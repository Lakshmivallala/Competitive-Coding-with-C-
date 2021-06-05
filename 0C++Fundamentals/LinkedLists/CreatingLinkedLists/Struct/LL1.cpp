#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct Node
{
public:
	int data;
	struct Node *next;
};


int main()
{
	//creating head pointer
 struct Node *head=NULL; 
 //Create node
 struct Node *one=new Node();
 //Insert data
 one->data=1;
 //Point node to NULL
 one->next=NULL;
 //Point head to address of node
 head=one;
 // 	   ____________
 // Head->|__1__|_NULL_|
 Node *two=new Node();

 cout<<one->data;


  return 0;
}