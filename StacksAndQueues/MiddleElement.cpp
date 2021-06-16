#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Stack implementation using doubly linked list

class DLL
{
public:
	int data;
	DLL *next;
	DLL *prev;
};

class Stack
{
public:
	DLL *head;
	DLL *mid;
	int count;
};

//function to create stack data structure
Stack * createStack()
{
	Stack *s=new Stack();
	s->count=0;
	return s;
};

void push(Stack *s,int val)
{
	DLL * temp=new DLL();
	temp->data=val;
	//adding in the beginning
	temp->prev=NULL;
	temp->next=s->head;
	s->count+=1;

	if(s->count==1)
		s->mid=temp;
	else
	{
		s->head->prev=temp;
		if(!(s->count & 1))
			s->mid=s->mid->prev;
	}
	s->head=temp;
}

int pop(Stack * s)
{
	if(s->count==0)
	{
		cout<<"Empty stack"<<endl;
		return -1;
	}
	DLL * head=s->head;
	int item=head->data;
	s->head=head->next;

	if(s->head!=NULL)
		s->head->prev=NULL;

	s->count=-1;

	if((s->count) & 1)
		s->mid=s->mid->next;
	delete(head);
	return item;
}

int findMiddle(Stack *s)
{
	if(s->count==0)
	{
		cout<<"Stack is empty" <<endl;
		return -1;
	}
	return s->mid->data;
}


int deleteMid(Stack *s)
{
	int temp=s->mid->data;
	s->mid->prev->next=s->mid->next;
	s->mid->next->prev=s->mid->prev->next;

	delete s->mid;
	s->mid=s->mid->next;

	return temp;
}	


int main()
{

	Stack *s=new createStack();
	push(s, 10);
	push(s, 11);
    push(s, 22);
    push(s, 33);
    push(s, 44);
    push(s, 55);
    push(s, 66);
    push(s, 77);

    cout<<"Popped item: "<<pop(s)<<endl;
    cout<<"Popped item: "<<pop(s)<<endl;
    cout<<"Popped item: "<<pop(s)<<endl;
    cout<<"Middle item: "<<findMiddle(s)<<endl;
    cout<<"Deleted Middle item: "<<deleteMid(s)<<endl;
    cout<<"Middle item: "<<findMiddle(s)<<endl;

	return 0;
}