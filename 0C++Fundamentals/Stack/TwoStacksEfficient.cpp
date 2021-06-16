#include<iostream>
#include<climits>

using namespace std;

//O/p:
// 7
// 9

//Two stacks must use only one array to store elements 
//2nd method: dividing the array into two halves and using each half for each stack
//but starting two stacks from extreme ends at 0 and n-1
//the stacks grow/shrink from opposite direction until tops dont collide

//this method is efficient use of array
//Push operation dont result in stack overflow 

// Time Complexity: 
// Push operation : O(1)
// Pop operation : O(1)
// Auxiliary Space: O(N) for the array to implement stack 

class TwoStack
{
	//private members of class Stack
	int * arr;
	int top1,top2;
	int size;
public:
	TwoStack(int n)
	{
		size=n;
		arr=new int[n];
		top1=-1;
		top2=size;
	}

void push1(int val)
{
	if(top1<top2-1) //if there is place to push element (< 0 out of array)
	{
		top1++; 
		arr[top1]=val;
	}
	else
	{
		cout<<"Stack overflow by s1 "<<"by element "<<val<<endl;
		return;
	}
}

void push2(int val)
{
	if(top1<top2-1) //if there is place to push element 
	{
		top2--; 
		arr[top2]=val;
	}
	else
	{
		cout<<"Stack overflow by s2 "<<"by element "<<val<<endl;
		return;
	}
}


int pop1()
{
	if(top1>=0) //stack underflow condition
		{
			int val=arr[top1];
			top1--;
			return val;
		}
		else
		{
			cout<<"Stack underflow";
			exit(1);
		}
}

int pop2()
{
	if(top2<size) //stack underflow condition
		{
			int val=arr[top2];
			top2++;
			return val;
		}
	else
	{
		cout<<"Stack underflow";
		exit(1);
	}
}

};

int main()
{
	TwoStack s(5);
	s.push1(5);
	s.push2(15);
	s.push2(2);
	s.push1(7);
	s.push2(9);

	cout<<s.pop1()<<endl;
	cout<<s.pop2()<<endl;
	return 0;
}