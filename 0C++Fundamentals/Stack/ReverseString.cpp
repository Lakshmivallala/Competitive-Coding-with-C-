#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//o/p:
// Sample String
// gnirtS elpmaS

//Time complexity: O(n)
//Space complexity: O(n) Auxillary space for stack

//can reverse string without using stack (reversestringefficient.cpp)
//to avoid the auxillary space

class Stack
{
public:
	int top;
	unsigned capacity;
	char * arr;
};

//initialises size of stack as 0
Stack * createStack(unsigned capacity)
{
	Stack *s=new Stack(); //initialise stack
	s->capacity=capacity;
	s->top=-1;
	s->arr=new char[(s->capacity * sizeof(char))]; 
	return s;
}

//full when top = last index
int isFull(Stack * s)
{
	return s->top==s->capacity-1;
}

//empty when top=-1
int isEmpty(Stack * s)
{
	return s->top==-1;
}

//adds items to stack and increases top by 1
void push(Stack *s,char item)
{
	if(isFull(s))
		return;
	s->arr[++s->top]=item;
}

//removes items from stack and decreases top by 1
char pop(Stack *s)
{
	if(isEmpty(s))
		return -1;
	return s->arr[s->top--];
}

void reverse(char str[])
{
	int n= strlen(str);
	Stack * s=createStack(n); //creating stack of sizeof(the string)
	int i;
	for(int i=0;i<n;i++)
		push(s,str[i]); //pushing string elements to stack
	for(int i=0;i<n;i++)
		str[i]=pop(s); //pop elements and insert into string 
}

//driver function
int main()
{
	char str[]="Sample String";
	cout<<str<<endl;
	reverse(str);
	cout<<str<<endl;
	return 0;
}