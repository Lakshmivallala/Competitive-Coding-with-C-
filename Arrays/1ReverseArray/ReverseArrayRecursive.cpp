#include<iostream>
#include <bits/stdc++.h>

//bits/stdc.h: includes every standard library

using namespace std;


void ReverseArray(int arr[],int start, int end)
{
	if(start>=end)
		return;
	int t;
	t=arr[start];
	arr[start]=arr[end];
	arr[end]=t;

	ReverseArray(arr,start+1,end-1);
}


void printArray(int arr[],int n)
{
cout<<"The array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";	
	}
}

int main()
{
	//C++ doesn't permit this since we must know the size of the array during compile time. Using the below code, we'll know the size of the array during run time
	// int n;
	// cout<<"Enter n:"<<endl;
	// cin>>n;
	// int arr[n];

	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	int *arr=new int[n];


	cout<<"Enter "<<n<<" elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the"<<i<<"th element"<<endl;
		cin>>arr[i];
	}

	printArray(arr,n);
	ReverseArray(arr,0,n-1);
	printArray(arr,n);
}