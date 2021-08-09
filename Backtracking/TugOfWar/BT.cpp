#include<iostream>
#include <climits>

// 1st subset:
// 45 -34 12 98 -1 
// 2nd subset:
// 23 0 -99 4 189 4

// Time Complexity: O(2^n)

//Minimise sum of two subsets

using namespace std;

void TugOfWarUtil(int *arr,int n,bool *cur_elements,int NofSelectedElements,bool * sol,int *mindiff,int sum,int curSum,int curPosition)
{
	if(curPosition==n)
		return;
	if((n/2 - NofSelectedElements) > (n - curPosition))
		return;
	TugOfWarUtil(arr,n,cur_elements,NofSelectedElements,sol,mindiff,sum,curSum,curPosition+1);
	NofSelectedElements++;
	curSum+=arr[curPosition];
	cur_elements[curPosition]=true;

	if(NofSelectedElements == n/2)
	{
		if(abs(sum/2 - curSum) < *mindiff)
		{
			*mindiff=abs(sum/2 - curSum);
			for(int i=0;i<n;i++)
				sol[i]=cur_elements[i];
		}
	}
	else
	{
		TugOfWarUtil(arr,n,cur_elements,NofSelectedElements,sol,mindiff,sum,curSum,curPosition+1);
	}
	cur_elements[curPosition]=false;
}

void TugOfWar(int *arr,int n)
{
	bool * cur_elements=new bool[n];
	bool * sol=new bool[n];
	int mindiff=INT_MAX;
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=arr[i];
		cur_elements[i]=sol[i]=false;
	}

	TugOfWarUtil(arr,n,cur_elements,0,sol,&mindiff,s,0,0);

	cout<<"1st subset:"<<endl;
	for(int i=0;i<n;i++)
	{
		if(sol[i]==true)
			cout<<arr[i]<<" ";
	}

	cout<<"2nd subset:"<<endl;
	for(int i=0;i<n;i++)
	{
		if(sol[i]==false)
			cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={23,45,-34,12,0,98,-99,4,189,-1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	TugOfWar(arr,n);

	return 0;
}