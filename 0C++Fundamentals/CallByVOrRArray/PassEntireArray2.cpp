#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 6 6 5 4 2 1 

void F(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[] = { 1, 2, 4, 5, 6 ,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    F(arr,n);

   //  long long maxf = INT_MIN;
  	// cout<<maxf;
  	
    return 0;
}