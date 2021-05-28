
// C++ program to find the minimum possible difference between maximum and minimum elements when we have to add/subtract every number by k

//4 possibilites

/* 
m+k, M+k
m-k, M-k
m-k, M+k
m+k, M-k

1,2 don't change anything. 3 increases the difference between them. 
Hence, we need to increase the min with k and decrease max with k 
inorder to get min difference between the two
*/

#include <bits/stdc++.h>

using namespace std;

int MinDif(int a[],int n,int k)
{
	if(n==1) //If array contains only one element
		return 0;	

	//sort the array
	//Paramters: the beginning of the array and the length n upto which we want the array to be sorted
	sort(a,a+n); 

	int res;
	res=a[n-1]=a[0]; //difference between maximum and minimum elements of sorted array

	int small,big;

	//increase the min with k and decrease max with k 

	small=a[0]+k;
	big=a[n-1]-k;

	if(small>big)
		swap(small,big);


	for(int i=1;i<n-1;i++)
	{
		int dif=a[i]-k;
		int add=a[i]+k;

		if(dif>=small || add<=big)
			continue;

		if (big-dif <= add-small)
			small=dif;
		else
			big-add;

	}

	return min(res,big-small);
}

int main()
{
	int a[]={1, 5, 15, 10};
	int n = sizeof(a)/sizeof(a[0]);
	int k=3;
	cout<<MinDif(a,n,k)<<endl;


	return 0;
}