#include<iostream>

using namespace std;
// o/p:
// A subset with sum 9 IS present

// https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
//               (4, 9)
//              {True}
//            /        \  
//         (3, 6)       (3, 9) (include or no?, if yes, subtract the sum value)
               
//         /    \        /   \ 
//      (2, 2)  (2, 6)   (2, 5)  (2, 9)
//      {True}  
//      /   \ 
//   (1, -3) (1, 2)  
// {False}  {True} 
//          /    \
//        (0, 0)  (0, 2)
//        {True} {False}  

//TC: Exponential in worst case since we might try all the subsets 
//There is no known polynomial time solution for this problem 
//So it is a NP COMPLETE problem
//So we use DP for psuedo-polynomial time solution    

bool SubsetSum(int a[],int n,int sum)
{
	//base cases
	if(sum==0)
		return true; //if sum=0, empty set can be the result
	if(n==0)
		return false; //if n(items)=0, no matter what the sum is, ss is not possible
	if(a[n-1]>sum) //if last element > sum, ignore
		return SubsetSum(a,n-1,sum); //i.e sum remains same, n is decremented
	//else: include the element or no
	return SubsetSum(a,n-1,sum) || SubsetSum(a,n-1,sum-a[n-1]);
}

int main()
{
	int arr[]={3,34,4,12,5,2}; //remove 4 => false o/p
	int sum=9;
	int n=sizeof(arr)/sizeof(arr[0]);
	if(SubsetSum(arr,n,sum)==true)
		cout<<"A subset with sum "<<sum<<" IS present"<<endl;
	else
		cout<<"A subset with sum "<<sum<<" IS NOT present"<<endl;
	return 0;
}