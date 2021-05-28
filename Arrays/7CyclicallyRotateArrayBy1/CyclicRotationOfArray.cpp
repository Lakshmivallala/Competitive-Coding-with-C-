#include<iostream>

using namespace std;

void rotate(int arr[], int n)
{
    int x;
    x=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    
}
int main()
{
    int arr[] = { 1, 2, 4, 5, 6 ,6};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    rotate(arr,n);
    for(int i=0;i<n;i++)
    {
    	printf("%d",arr[i]);
    }
    
    return 0;
}