#include<iostream>
#include<map>
#include <list>
#include <queue>

using namespace std;

// I/p O/p:
// 0 1
// 0 2
// 1 3 
// 2 4 
// 0 3
// 0:1 1:1 2:1 3:1 4:1 5:0 6:0 7:0

//Time complexity: O(V + E)
//Space Complexity: O(V) for visited array of size V

vector<int> a[100000];
int visited[100000]; //since this is a global array, values are already 0

void DFS(int s)
{
	if(!visited[s])
	{
		visited[s]=1;
		for(int i=0;i<a[s].size();i++)
		{
			 if(!visited[a[s][i]])
			 {
			 	DFS(a[s][i]);
			 }
		}
	}
}

int main()
{
	int n=5; //number of edges

	while(n--)
	{
		//directed graph
		int p,q;
		cin>>p>>q;
		a[p].push_back(q);

	}

	DFS(0);

	for(int i=0;i<=7;i++)
	{
		cout<<i<<":"<<visited[i]<<" ";
	}

	return 0;
}