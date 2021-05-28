#include<iostream>

//Tournament method

using namespace std;

struct MM
{
	int min;
	int max;
};

struct MM ArrayMinMax(int arr[], int low,int high)
{
	struct MM randVar,ml,mr;
	int mid;
	//if there is only one element
	if(low==high)
	{
		randVar.max=arr[low];
		randVar.min=arr[low];

		return randVar;
	}

	//if there are two elements
	if(high==low+1)
	{
		if(arr[low]>arr[high])
	{
		randVar.min=arr[high];
		randVar.max=arr[low];
	}
		else
	{
		randVar.min=arr[low];
		randVar.max=arr[high];
	}

	return randVar;
	}

	//if there are more than 2 elements
	
	mid=(low+high)/2;
	ml=ArrayMinMax(arr,low,mid);
	mr=ArrayMinMax(arr,mid+1,high);

	if(ml.min<mr.min)
		randVar.min=ml.min;
	else
		randVar.min=mr.min;

	if(ml.max<mr.max)
		randVar.max=mr.max;
	else
		randVar.max=ml.max;
	
	return randVar;
}

int main()

{	int n;
	cout<<"Enter n";
	cin>>n;
	int arr[n];
	cout<<"Enter n elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int i=0;i<n;i++)
	{
		cout<<"Array:"<<arr[i]<<endl;
	}

	struct MM randVar= ArrayMinMax(arr, 0,n-1);

	cout<<randVar.min<<endl;
	cout<<randVar.max<<endl;

	return 0;
}
