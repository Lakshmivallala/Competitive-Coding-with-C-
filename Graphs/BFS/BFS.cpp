#include<iostream>
#include<map>
#include <list>
#include <queue>

using namespace std;
// O/p
// 0 1 4 2 3 

template<typename T>

class Graph
{
	map<T,list<T>> l; //ex: 2->(0,1): 2 in T(int) and (0,1) in list
	public:
	void addEdge(int u,int v)
	{
		l[u].push_back(v);
		l[v].push_back(u);
	} 
	void bfs(T src) //source node
	{
		map<T,int> visited;
		queue<T> q;

		q.push(src);
		visited[src]=true;

		while(!q.empty()) //while queue is not empty
		{
			T node= q.front();
			q.pop();
			cout<<node<<" ";
			for( int nbr:l[node])
			{
				if(!visited[nbr])
				{
					q.push(nbr);
					visited[nbr]=true;
				}
			}
		} 
	}
};

int main()
{
	Graph <int> G;
    G.addEdge(0, 1);
    G.addEdge(0, 4);
    G.addEdge(1, 2);
    G.addEdge(1, 3);
    G.addEdge(1, 4);
    G.addEdge(2, 3);
    G.addEdge(3, 4);
    
    G.bfs(0);

	return 0;
}