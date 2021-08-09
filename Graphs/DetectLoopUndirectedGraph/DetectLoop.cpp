#include<iostream>
#include <list>
#include <queue>
#include<climits>

using namespace std;

//DFS of a graph can be used to detect a cycle. A graph has a cycle if it has
// a back edge (edge from a descendant to an ancestor) or a self loop

class Graph
{
	int V;
	list<int> *adj; //pointer to array with adjacency lists
	bool isCyclicUtil(int v,bool visited[],int parent);
public:
	Graph(int V);
	void addEdge(int v,int u);
	bool isCyclic(); //returns true if a cycle exists
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int u,int v)
{
	adj[v].push_back(u); //so, undirected graph
	adj[u].push_back(v);
}

bool Graph::isCyclicUtil(int v,bool visited[],int parent)
{
	visited[v]=true;

	list<int> :: iterator i;

	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(!visited[*i])
		{
			if (isCyclicUtil(*i,visited,v))
				return true;
		}
		else if(*i!=parent)
			return true;
	}
	return false;
}

bool Graph::isCyclic()
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
	{
		if(visited[i])
			if(isCyclicUtil(i,visited,-1))
				return true;
	}
	return false;
}


int main()
{
	Graph G(5);
    G.addEdge(1, 0);
    G.addEdge(0, 2);
    G.addEdge(2, 1);
    G.addEdge(0, 3);
    G.addEdge(3, 4);
    
    G.isCyclic()?cout<<"Graph contains a cycle\n":cout<<"Graph doesn't contain a cycle"<<endl;

    Graph G2(3);
    G2.addEdge(0, 1);
    G2.addEdge(1, 2);

    G2.isCyclic()?cout<<"Graph contains a cycle\n":cout<<"Graph doesn't contain a cycle"<<endl;

	return 0;
}