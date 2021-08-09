#include<iostream>

using namespace std;

#define V 4

// O/p:
// Assigned colors: 
//  1 2 3 2

//TC: O(m**V)
//SC: O(V) (for recursive stack of graphColoring)

void printSol(int color[])
{
	cout<<"Assigned colors: "<<endl;
	for(int i=0;i<V;i++)
		cout<<" "<<color[i];
	cout<<endl;
}

//is the colored graph safe
bool isSafe(bool graph[V][V],int color[])
{
	//checking each edge
	for(int i=0;i<V;i++)
		for(int j=i+1;j<V;j++)
			if(graph[i][j] && color[j]==color[i])
				return false;
	return true;
}

bool graphColoring(bool graph[V][V],int m,int i,int color[V])
{
	if(i==V)
	{
		if(isSafe(graph,color))
		{
			printSol(color);
			return true;
		}
		return false;
	}

	for(int j=1;j<=m;j++)
	{
		color[i]=j;
		if(graphColoring(graph,m,i+1,color))
			return true;
		color[i]=0;
	}
	return false;
}

int main()
{
	//adjacency matrix for the graph
	bool graph[V][V]={ {0,1,1,1}, 
					   {1,0,1,0}, 
					   {1,1,0,1}, 
					   {1,0,1,0} };
	int m=3; //the number of colours 
	int color[V];
	for(int i=0;i<V;i++)
		color[i]=0;
	if(!graphColoring(graph,m,0,color))
		cout<<"Solution does not exist";
	return 0;
}