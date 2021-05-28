#include<iostream>

using namespace std;

struct MM
{
	int min;
	int max;
};

struct MM ArrayMinMax(int arr[], int n)
{
	struct MM randVar;
	if(n==1)
	{
		randVar.max=arr[0];
		randVar.min=arr[0];

		return randVar;
	}

	if(arr[0]>arr[1])
	{
		randVar.min=arr[1];
		randVar.max=arr[0];
	}
	else
	{
		randVar.min=arr[0];
		randVar.max=arr[1];
	}

	for(int i=2;i<n;i++)
	{
		if(arr[i]>randVar.max)
			randVar.max=arr[i];
		else if(arr[i]<randVar.min)
			randVar.min=arr[i];
	}
	
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

	struct MM randVar= ArrayMinMax(arr, n);

	cout<<randVar.min<<endl;
	cout<<randVar.max<<endl;

	return 0;
}
