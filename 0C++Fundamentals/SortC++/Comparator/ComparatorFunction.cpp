#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//OUTPUT:
// 1 3 4 6 35 
// 35 6 4 3 1 

void display(int arr[])
{
	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

// Comparator function: Binary function that accepts two elements in 
// the range as arguments, and returns a value convertible to bool

bool compare(int a,int b)
{
	if(a>b) return true;
	return false;
}
int main()
{

	int arr[5]={1,4,35,6,3};
	//sort(first,last);
	sort(arr,arr+5);
	display(arr);

	sort(arr,arr+5,compare);
	display(arr);

	return 0;
}