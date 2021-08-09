#include<iostream>
#include<algorithm>
using namespace std;

// The knapsack problem has been a famous problem since ancient times. 
// It can be solved using the greedy method, branch and bound method, 
// dynamic programming, backtracking et cetera. 

//given: weights, values of n items, knapsack capacity, find: max profit

// Approach 1: find all subsets with different fractions and pick max
// Efficient approach: Greedy approach

// Greedy appraoch: 1. value/weight ration 2. sort 3. Add highest ratio item

// O(n log n) 

// OUTPUT:
// New order of items
// 60 10 6
// 100 20 5
// 120 30 4
// The maximum profit: 
// 240

struct Item
{
	int value;
	int weight;

	//Constructor
	Item(int value,int weight)
	{
		this->value=value;
		this->weight=weight;
	}
};

//static to avoid: error: invalid use of non-static member function
static bool comparator(struct Item a, struct Item b)
{
	double r1,r2;
	r1=(double) a.value / (double) a.weight;
	r2=(double) b.value / (double) b.weight;
	return r1>r2;
}

double fractionalKS(int W,struct Item arr[], int n)
{
	sort(arr,arr+n,comparator); //in descending order

	cout<<"New order of items"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].value<<" "<<arr[i].weight<<" " <<((double)arr[i].value/arr[i].weight)<<endl;
	}
	int curW=0;
	double finalV=0.0;

	for(int i=0;i<n;i++)
	{
		if(curW+arr[i].weight<=W)
		{
			curW+=arr[i].weight; //adding entire item to current weight
			finalV+=arr[i].value; //adding the current weight value to ans
		}
		//else pick a fraction
		else
		{
			int remain=W-curW; //remaining ks weight (ks weight-curr weight)
			finalV+=arr[i].value*((double)remain/(double)arr[i].weight);
			break;
		}
	}
	cout<<"The maximum profit: "<<endl;
	return finalV;
}

int main()
{
	int W=50; //weight or capacity of the knapsack
	Item arr[]= { {60,10}, {100,20}, {120,30} };

	int n=sizeof(arr)/sizeof(arr[0]);

	cout<<fractionalKS(W,arr,n);

	return 0;
}
