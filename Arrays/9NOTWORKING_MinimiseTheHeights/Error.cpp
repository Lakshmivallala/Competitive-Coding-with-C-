
//https://stackoverflow.com/questions/32233916/minimum-difference-between-heights-of-towers/63220955#63220955

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

int MinDif(int arr[], int n, int k) {
	//sort the array
	//Paramters: the beginning of the array and the length n upto which we want the array to be sorted
	sort (arr, arr+n);

	//difference between maximum and minimum elements of sorted array
	int ans = arr[n-1]-arr[0];

	int x = 1;

	//ignore negative numbers after subtraction
	while (arr[x]-k < 0) x++;

	//increase the min with k and decrease max with k 
	for (; x<n; x++)  
	{
		int mn = min(arr[0]+k, arr[x]-k);
		int mx = max(arr[n-1]-k, arr[x-1]+k);
		ans = min(mx-mn, ans);
	}
return ans;
}



int main()
{
	int arr[]={4,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=10;
	cout<<MinDif(arr,n,k)<<endl;


	return 0;
}