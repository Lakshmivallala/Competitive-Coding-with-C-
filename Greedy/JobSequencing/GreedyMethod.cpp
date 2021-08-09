#include<iostream>
#include<algorithm>

using namespace std;

//OUTPUT:
//3 142 

struct Job
{
	char id;
	int deadline;
	int profit;
};

bool comparison(Job a,Job b)
{
	return (a.profit>b.profit);
}

void JobSchedule(Job arr[],int n)
{
	sort(arr,arr+n,comparison);
	int result[n];
	bool slot[n];

	for(int i=0;i<n;i++)
	slot[i]=false; //initialising all the slots to be free

	for(int i=0;i<n;i++)
	{
		for(int j=min(n,arr[i].deadline)-1;j>=0;j--) //start from last possible slot
		{
			if(slot[j]==false)
			{
				result[j]=i; //add job to result
				slot[j]=true;
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
		if(slot[i])
			cout<<arr[result[i]].id<<" ";
}

int main()
{
	Job arr[]={ {'a',2,100},
				{'b',1,19},
				{'c',2,27},
				{'d',1,25},
				{'e',3,15} };
	int n=sizeof(arr)/sizeof(arr[0]);
	JobSchedule(arr,n);

	return 0;
}