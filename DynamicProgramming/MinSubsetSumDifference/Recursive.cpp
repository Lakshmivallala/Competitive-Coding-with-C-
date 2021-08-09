#include<iostream>

using namespace std;

//Find all subsets and all possible sums, an item is either in s1 or s2, we check for optimal one

// O/p:
// Min diff: 1

// TC: O(2^n): exponential 2*2*2....2 (n times) since 1->include, 1->dont include 
// (so 1+1 = 2 for each element)

int findMinRec(int arr[],int i, int sum, int TotalSum)
{
	if(i==0)
		return abs((TotalSum-sum)-sum);

	return min(findMinRec(arr,i-1,sum+arr[i-1],TotalSum),
		findMinRec(arr,i-1,sum,TotalSum)); //include/dont include
}

int findMin(int arr[],int n)
{
	int TotalSum=0;
	for(int i=0;i<n;i++)
		TotalSum+=arr[i];
	return findMinRec(arr,n,0,TotalSum);
}

int main()
{
	int arr[]={3,1,4,2,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Min diff: "<<findMin(arr,n)<<endl;
	return 0;
}