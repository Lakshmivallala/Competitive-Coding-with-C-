#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

//OUTPUT:
//c a e 

//O(n**2)
//https://www.youtube.com/watch?time_continue=365&v=R6Skj4bT1HE&feature=emb_logo
struct Job
{
	char id;
	int deadline;
	int profit;
};

static bool comparison(Job a,Job b) //notice we'reusing static 
//else error:error: invalid use of non-static member function
{
	return (a.profit>b.profit);
}

vector<int> JobSchedule(Job arr[],int n)
{
	sort(arr,arr+n,comparison);
	int result[n]={0};
	bool slot[n]={0};

	for(int i=0;i<n;i++)
	{
		for(int j=min(n,arr[i].deadline);j>=1;j--) //start from last possible slot
		{
			if(slot[j]==false)
			{
				slot[j]=1;
				result[j]=arr[i].profit; //add job to result
				break;
			}
		}
	}
	int no=0;
	int resSum=0;
	for(int i=0;i<n;i++)
	{
		if(result[i]>0)
			{
				no++;
				resSum+=result[i];
			}
	}
	vector <int> res(2);
	res[0]=no;
	res[1]=resSum;
	return res;
}

int main()
{
	Job arr[]={ {'a',2,100},
				{'b',1,19},
				{'c',2,27},
				{'d',1,25},
				{'e',3,15} };
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>trial(2);
	trial=JobSchedule(arr,n);
	for(int i=0;i<2;i++)
	{
		cout<<trial[i]<<" ";
	}
	return 0;
}