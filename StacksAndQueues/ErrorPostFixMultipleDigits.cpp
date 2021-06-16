#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//TC: O(n)
class Stack
{
public:
	int top;
	unsigned capacity;
	int *arr;
};

Stack * createStack(unsigned capacity)
{
	Stack * s=new Stack;
	if(!s) return NULL;
	s->top=-1;
	s->capacity=capacity;
	s->arr= new int[(s->capacity * sizeof(int))]; 
	//or s->arr=(int *) malloc(s->capacity * sizeof(int));
	if(!s->arr)return NULL;
	return s; 
}

int isEmpty(Stack *s)
{
	return s->top==-1;
}

char peek(Stack *s)
{
	return s->arr[s->top];
}

char pop(Stack *s)
{
	if(!isEmpty(s))
		return s->arr[s->top--];
	return '$';
}

void push(Stack *s, char op)
{
	s->arr[++s->top]=op;
}

int postfixevaluation(char * exp)
{
	Stack *s=createStack(strlen(exp));
	int i;
	if(!s) return -1;
	for(i=0;exp[i];++i)
	{
		if(exp[i]==' ')
			continue;
		else if(isdigit(exp[i]))
			{
				int num=0;
				while(isdigit(exp[i]))
				{
					num=num*10+(int)(exp[i]-'0');
					i++;
				}
				i--;
				push(s,num);
			}
		else
		{
			int o1,o2;
			o1=pop(s);
			o2=pop(s);
			switch(exp[i])
			{
				case '+': 
				push(s,o1+o2);
				break;

				case '-': 
				push(s,o1-o2);
				break;

				case '*': 
				push(s,o1*o2);
				break;

				case '/': 
				push(s,o1/o2);
				break;
			}
		}
	}
	return pop(s);
}

int main()
{	
	char exp[]="100 200 + 2 / 5 * 7 +";
	cout<<postfixevaluation(exp);
	return 0;
}