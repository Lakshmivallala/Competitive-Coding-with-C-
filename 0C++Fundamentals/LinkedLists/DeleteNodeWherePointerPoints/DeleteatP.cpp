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

//In a linked list, a pointer p points to some node. Delete that node.
//To do this, We traverse till that node, change the data of p with data of
//p->next. Point temp pointer to p->next. Point p to p->next->next or temp->next.

//However, this method can't be use it to delete the last node since we won't have
//the next node to switch data with

//We do this since deleteing node p will result it 2 distinct broken linked lists
//We need addresses of value before and after p


void DeleteAtP(Node *p)
{
	Node *temp;
	temp=p->next;
	p->data=temp->data;
	p->next=temp->next;	
	free(temp);
}

int main()
{
  	

  return 0;
}