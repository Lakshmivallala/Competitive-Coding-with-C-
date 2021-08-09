#include<iostream>
#include<bits/stdc++.h>

//o/p:
//220

//http://cse.unl.edu/~goddard/Courses/CSCE310J/Lectures/Lecture8-DynamicProgramming.pdf

//brute force or exhaustive 
//consider all possible subsets, consider subsets whose total weight is smaller
//than the knapsack capacity, choose subset with max profit

//Time complexity is O(2^n) : exponential
//This is because the same sub problems are calculated again and again
//or redundant sub problems 
//Space Complexity: Auxillary space: O(1) since no extra data structure is used

//So since this problem has overlapping subproblems, it satisfies constraints of dynamic programming

using namespace std;

//utility function that returns the max value between 2 
int max(int a,int b)
{
	return (a>b ? a : b); //if a>b, return a, else return b
}

//returns max value that can be put in ks
int knapsack(int wt[],int val[],int W,int n)
{
	//base case
	if(n==0 || W==0) //if no item || no capacity
		return 0;

	//if weight of item is greater than knapsack capacity, don't inclue it
	if(wt[n-1]>W)
		return knapsack(wt,val,W,n-1); //only the size of array will be 
		//decremented and capacity remains same

	//if weight is less than knapsack, we either include it or not
	else
		return max(val[n-1] + knapsack(wt,val,W-wt[n-1],n-1), //include item
			knapsack(wt,val,W,n-1)); //don't include (no change in W, only n)
}

int main()
{
	int val[]={60,100,120};
	int wt[]={10,20,30};
	int W=50; //ks capacity
	int n=sizeof(val)/sizeof(val[0]);
	cout<<knapsack(wt,val,W,n);

	return 0;
}