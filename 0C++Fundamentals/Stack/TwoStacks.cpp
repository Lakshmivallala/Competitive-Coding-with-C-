#include<iostream>
#include<climits>

using namespace std;

//Two stacks must use only one array to store elements 
//1st method: dividing the array into two halves and using each half for each stack
//a[0] to a[n/2] and a[n/2 + 1] to a[n-1]

//this method is inefficient use of array
//Push operation might result in stack overflow even while there is space in arr
//if we have a[6], 6/3= 3 elements each
//3 elements already pushed into 1st stack, stack overflow even if we can 
//place 3 more elements

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
		top1=n/2+1; //first top at n/2+1 to n-1
		top2=n/2; //second top from n/2 to 0
	}

void push1(int val)
{
	if(top1>0) //if there is place to push element (< 0 out of array)
	{
		top1--; 
		arr[top1]=val;
	}
	else
	{
		cout<<"Stack overflow"<<"By element "<<val<<endl;
		return;
	}
}

void push2(int val)
{
	if(top2<size-1) //if there is place to push element 
	{
		top2++; 
		arr[top2]=val;
	}
	else
	{
		cout<<"Stack overflow s2"<<"By element "<<val<<endl;
		return;
	}
}


int pop1()
{
	if(top1<=size/2) //stack underflow condition
		{
			int val=arr[top1];
			top1++;
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
	if(top2>=size/2+1) //stack underflow condition
		{
			int val=arr[top2];
			top2--;
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