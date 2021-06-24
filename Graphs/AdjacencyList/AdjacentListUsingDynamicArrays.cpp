#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// O/p
// So we have the sets:
// Vertices V ={0,1,2,3,4} and 7 edges
// Adjacency list of the vertex 0
//  head - > 1- > 4
// Adjacency list of the vertex 1
//  head - > 0- > 2- > 3- > 4
// Adjacency list of the vertex 2
//  head - > 1- > 3
// Adjacency list of the vertex 3
//  head - > 1- > 2- > 4
// Adjacency list of the vertex 4
//  head - > 0- > 1- > 3


void addEdge(vector<int> adj[],int u, int v)
{
	//check notebook diagram for better understanding
	adj[u].push_back(v); //insert v at index 0
	adj[v].push_back(u); //we are inserting u at v as well
	//That means that we created an undirected graph (bidirectional)
}

void printGraph(vector<int> adj[], int v)
{
	for(int i=0;i<v;++i)
	{
		cout<<"Adjacency list of the vertex "<<i<<"\n head ";
		for(auto x: adj[i])
			cout<<"- > "<<x;
		cout<<endl;
	}
}

int main()
{
	int v = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    

	cout<<"So we have the sets:"<<endl;
	cout<<"Vertices V ={0,1,2,3,4} and 7 edges"<<endl;

	printGraph(adj, v);

	return 0;
}