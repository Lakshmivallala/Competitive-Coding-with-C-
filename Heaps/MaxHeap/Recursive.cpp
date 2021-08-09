#include<iostream>

using namespace std;

// OUTPUT:
// Array representation of the heap:
// 17 15 13 9 6 5 10 4 8 3 1 

void heapify(int arr[],int n,int i)
{
	int largest=i;
	int lc=2*i+1;
	int rc=2*i+2;

	if(lc<n && arr[lc]>arr[largest])
		largest=lc;
	if(rc<n && arr[rc]>arr[largest])
		largest=rc;
	if(largest!=i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}

void buildHeap(int arr[],int n)
{
	int startInd=(n/2)-1;
	//reverse level order traversal
	for(int i=startInd;i>=0;i--)
		heapify(arr,n,i);
}

void printHeap(int arr[],int n)
{
	cout<<"Array representation of the heap:"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[]={1,3,5,4,6,13,10,9,8,15,17};
	int n=sizeof(arr)/sizeof(arr[0]);
	buildHeap(arr,n);
	printHeap(arr,n);

	return 0;
}