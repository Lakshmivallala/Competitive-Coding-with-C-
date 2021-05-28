
#include <bits/stdc++.h>

using namespace std;

int MinDif(int arr[], int n, int k) {
sort (arr, arr+n);
int ans = arr[n-1]-arr[0];
int x = 1;
while (arr[x]-k < 0) x++;
for (; x<n; x++) {
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