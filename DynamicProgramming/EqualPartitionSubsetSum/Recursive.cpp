#include<iostream>

using namespace std;

//O/p:
//Can be divided into 2 subsets of equal sum

//TC: O(2^n): Exponential checks ALL elements (to include/exclude)

bool SubsetSum(int arr[],int n, int sum)
{
	if(sum==0) return true; 
	if(n==0 && sum!=0) return false;

	if(arr[n-1]>sum)
		return SubsetSum(arr,n-1,sum); // exclude element

	return SubsetSum(arr,n-1,sum) || SubsetSum(arr,n-1,sum-arr[n-1]); //exclude/include
}

bool findPartition(int arr[],int n)
{
	int sum=0;
	//finding sum of array
	for(int i=0;i<n;i++)
		sum=sum+arr[i]; 

	if(sum%2!=0)
		return false; //if sum is odd, cant find subsets with equal sums

	return SubsetSum(arr,n,sum/2); //else check if we can find a subset with sum=sum/2
}

int main()
{
	int arr[]={3,1,5,9,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(findPartition(arr,n)==true)
		cout<<"Can be divided into 2 subsets of equal sum"<<endl;
	else
		cout<<"Cannot be divided into 2 subsets of equal sum"<<endl;

	return 0;
}