#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void fun1(int *A) //or (int A[])
{
	;
}

void fun2(int (*B)[3]) //or **B or (int B[][3])
{
	
}

void fun3(int (*C)[2][2]) //or ***C or (int C[][2][2])
{
	__asm__("nop");
}

int main()
{

	int A[]={1,3};
	fun1(A); //A returns int*

	int B[2][3]={{4,5,4},{3,6,2}}; //B returns int (*)[3]
	fun2(B);

	int C[3][2][2]=
	{ 
	{ {2,5},{7,9} }, 
	{ {3,4},{6,1} },
	{ {0,8},{3,6} }
	};
	fun3(C);


	return 0;
}