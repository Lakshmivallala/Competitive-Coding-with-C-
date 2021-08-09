#include<iostream>

using namespace std;

#define V 4

// O/p:
// Assigned colors: 
//  1 2 3 2

//TC: O(m**V) (worst case, total number of combinations)
//SC: O(V) (for recursive stack of graphColoring)

void printSol(int color[])
{
	cout<<"Assigned colors: "<<endl;
	for(int i=0;i<V;i++)
		cout<<" "<<color[i];
	cout<<endl;
}

//is the colored graph safe
bool isSafe(int v,bool graph[V][V],int color[],int c)
{
	for(int i=0;i<V;i++)
			if(graph[v][i] && c==color[i])
				return false;
	return true;
}

bool graphColoringUtil(bool graph[V][V],int m,int color[],int v)
{
	if(v==V)
		return true; //if all vertices already have a color assigned to them
	for(int c=1;c<=m;c++)
	{
		if(isSafe(v,graph,color,c))
		{
			color[v]=c;
			if(graphColoringUtil(graph,m,color,v+1)==true)
				return true;
			color[v]=0;
		}
	}
	return false;
}

bool graphColoring(bool graph[V][V],int m)
{
	int color[V];
	for(int i=0;i<V;i++)
		color[i]=0;
	if(graphColoringUtil(graph,m,color,0)==false)
	{
		cout<<"Solution does not exist"<<endl;
		return false;
	}

	printSol(color);
	return true;
}

int main()
{
	//adjacency matrix for the graph
	bool graph[V][V]={ {0,1,1,1}, 
					   {1,0,1,0}, 
					   {1,1,0,1}, 
					   {1,0,1,0} };
	int m=3; //the number of colours 
	graphColoring(graph,m);
	return 0;
}