#include<iostream>

//Compare in pairs

using namespace std;


struct MM
{
	int min;
	int max;
};

struct MM ArrayMinMax(int arr[], int n)
{
	struct MM randVar;
	int i;
	
	//number of elements in the array are even
	if(n%2==0)
	{
		if (arr[0]>arr[1])
		{
			randVar.min=arr[1];
			randVar.max=arr[0];
		}

		else
		{
			randVar.max=arr[1];
			randVar.min=arr[0];
		}
	//starting index for loop
	i=2;
	}
	else
	{
		randVar.min=arr[0];
		randVar.max=arr[0];

		i=1;
	}

	//compare min max in pair
	while(i<n-1)
	{
		if(arr[i]<arr[i+1])
			{
				if(arr[i]<randVar.min)
					randVar.min=arr[i];
				if (arr[i+1]>randVar.max)
					randVar.max=arr[i+1];
			}
		else
		{
			if(arr[i]>randVar.max)
				randVar.max=arr[i];
			if(arr[i+1]<randVar.min)
				randVar.min=arr[i+1];
		}

		
		i=i+2;
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
