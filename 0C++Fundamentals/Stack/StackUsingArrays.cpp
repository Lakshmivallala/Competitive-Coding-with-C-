#include<iostream>
#include<climits>

using namespace std;

#define n 100

// O/P
// Pushed 5 to stack
// Pushed 15 to stack
// Pushed 2 to stack
// Pushed 23 to stack
// Pushed 42 to stack
// 42
// 23


class Stack
{
	//private members of class Stack
public:
	int * arr;
	int top;
	unsigned capacity;
};

Stack * createStack(unsigned capacity)
{
	Stack * s=new Stack;
	s->capacity=capacity;
	s->top=-1;
	s->arr=new int[n];
	return s;
}

int isFull(Stack * s)
{
	//top is equal to last index
	//then stack is full
	return s->top==s->capacity -1;
}

int isEmpty(Stack *s)
{
	return s->top==-1;
}

void push(Stack *s, int val)
{
	if(isFull(s)) //stack overflow condition
		return;
	s->arr[++s->top]=val; //increment top of stack and insert value
	cout<<"Pushed "<<val<<" to stack"<<endl;
}

int pop(Stack * s)
{
	if(isEmpty(s)) //stack underflow condition
		return INT_MIN;	cout<<"Pushed "<<val<<" to stack"<<endl;

	return s->arr[s->top--];
}

int peek(Stack * s)
{
	if(isEmpty(s))
		return INT_MIN;
	return s->arr[s->top];
}

int main()
{
	Stack * s=createStack(40); //size of stack: 40
	push(s,5);
	push(s,15);
	push(s,2);
	push(s,23);
	push(s,42);

	cout<<pop(s)<<endl;
	cout<<peek(s)<<endl;

	return 0;
}