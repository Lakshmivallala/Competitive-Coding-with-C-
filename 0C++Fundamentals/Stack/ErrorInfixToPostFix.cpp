#include<iostream>
#include<cstring>

using namespace std;

//using array implementation of stack here
class Stack
{
public:
	int top;
	unsigned capacity;
	int * arr; 
};

Stack * createStack(unsigned capacity)
{
	Stack * s=new Stack;
	if(!s)
		return NULL;
	s->top=-1;
	s->capacity=capacity;
	s->arr=new int[capacity];

	if(!s->arr) //if memory not allocated 
		return NULL;

	return s;
}

//standard utility function
int isEmpty(Stack * s)
{
	return s->top==-1;
}

char peek(Stack * s)
{
	return s->arr[s->top];
}

char pop(Stack * s)
{
	if(!isEmpty(s))
		return s->arr[s->top];
	return '$'; //return dollar symbol if stack is empty (Remember FLA?)
}

void push(Stack * s, char op)
{
	s->arr[++s->top]=op;
}

int isOperand(char ch)
{
	return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}

//utility function to check precendence of operators
//higher the return value, higher the precedence

int precedence(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
		return 1;

		case '*':
		case '/':
		return 2;

		case '^':
		return 3;
	}
	return -1;
}

//function to convert infix expression to postfix expression
int InfToPost(char * exp)
{
	int i,k;
	Stack * s= createStack(strlen(exp));
	if(!s) //if stack was not able to get created
		return -1;
	for(i =0,k=-1;exp[i];++i)
	{
		//operand? just output it
		if(isOperand(exp[i]))
			exp[++k]=exp[i];
		else if(exp[i]=='(') //if its the starting operator
			push(s,exp[i]);
		else if(exp[i]==')') //if its the closing bracket,
			// scan operator until we find a starting bracket
		{
			while(!isEmpty(s) && peek(s)!='(')
				exp[++k]=pop(s); //pop till '('
			if(!isEmpty(s) && peek(s)!='(') //if you don't see a closing bracket
				return -1; //invalid expression
			else
				pop(s);
		}
		else //if we encounter an operator 
		{
			//check precedence of operator and precedence of element at top
			while(!isEmpty(s) && precedence(exp[i])<=precedence(peek(s)))
				exp[++k]=pop(s); //keep popping and outputing
			push(s,exp[i]); //once condition becomes false, push element to stack
		}
	}

	while(!isEmpty(s))
		exp[++k]=pop(s);
	exp[++k]='\0';
	cout<<exp; 
	return EXIT_SUCCESS; //macro EXIT_SUCCESS is actually defined as zero, but makes your program more readable.
}	



int main()
{
	char exp[]="a+b*(c^d-e)^(f+g*h)-i";
	InfToPost(exp);

	return 0;
}	