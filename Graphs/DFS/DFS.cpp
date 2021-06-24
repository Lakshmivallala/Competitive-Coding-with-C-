#include<iostream>
#include<map>
#include <list>
#include <queue>

using namespace std;
// O/p
// 0 1 2 3 4	
//Time complexity: O(V + E)
//Space Complexity: O(V) for visited array of size V

class Graph
{
public:

	map<int,bool> visited; //visited map of int and bool type (v:true/false)
	map<int,list<int>> adj; //adj list (v:list of adjacent v)

	void addEdge(int u,int v);
	void DFS(int s); //s=source
};

//:: - scope resolution operator
//https://www.geeksforgeeks.org/scope-resolution-operator-in-c/

void Graph::addEdge(int u,int v)
{
	adj[u].push_back(v); //so, directed graph
}

void Graph::DFS(int s)
{
	visited[s]=true;
	cout<<s<<" ";

	list<int> :: iterator i;

	for(i=adj[s].begin();i!=adj[s].end();i++)
	{
		if(!visited[*i])
			DFS(*i); //Recursion for the vertices adjacent to our source vertex
	}
}

int main()
{
	Graph G;
    G.addEdge(0, 1);
    G.addEdge(0, 4);
    G.addEdge(1, 2);
    G.addEdge(1, 3);
    G.addEdge(1, 4);
    G.addEdge(2, 3);
    G.addEdge(3, 4);
    
    G.DFS(0);

	return 0;
}