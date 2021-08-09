#include<iostream>
#include<map>
#include <list>
#include <queue>

using namespace std;

// I/p O/p:
// 0 1
// 1 4
// 4 5
// 5 6
// 5 2
// 1 6
// YES (Can you go from 1 to 6? YES -> 0 to 1, 1 to 4, 4 to 5, 5 to 6 )

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

	//can you go from l to m
	int l,m;
	cin>>l>>m;
	DFS(l); //doing this only once so chill else we have to reset visited to 0

	if(visited[m]==l)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}