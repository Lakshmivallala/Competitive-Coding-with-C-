#include<iostream>
#include<map>
#include <list>
#include <queue>

using namespace std;
// O/p
// 0 1 4 2 3
//Time Complexity: O(V+E)
//(visits every vertex and edge)

class Graph
{
	int V; //|v| - number of vertices
	list<int>*adj; //creating a pointer to an array of adjacency list
public:
	Graph(int v); //creating a constructor
	void addEdge(int u,int v);
	void BFS(int s); //s=source
};

//:: - scope resolution operator
//https://www.geeksforgeeks.org/scope-resolution-operator-in-c/

Graph::Graph(int V) //no void here
{
	this->V=V;
	adj=new list<int>[V]; //creating list of size v
}

void Graph::addEdge(int u,int v)
{
	adj[u].push_back(v); //so, directed graph
}

void Graph::BFS(int s)
{
	bool *visited=new bool[V]; //created a bool array of pointers of size V
	for(int i=0;i<V;i++)
		visited[i]=false; //mark all as false initially

	list<int>queue; //queue for BST
	visited[s]=true; //mark source node as visited
	queue.push_back(s); //enqueue it from queue

	list<int> :: iterator i; //to get the adjacent vertices of a vertex

	while(!queue.empty())
	{
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for(i=adj[s].begin();i!=adj[s].end();++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}

	}
}

int main()
{
	Graph G(5);
    G.addEdge(0, 1);
    G.addEdge(0, 4);
    G.addEdge(1, 2);
    G.addEdge(1, 3);
    G.addEdge(1, 4);
    G.addEdge(2, 3);
    G.addEdge(3, 4);
    
    G.BFS(0);

	return 0;
}