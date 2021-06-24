#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:    
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    int src = 0;
        vector<int>ans;
        bool arr[V] = {0};
        queue<int>q;
        q.push(src);
        arr[0] = 1; //c=mark the node as visited in the bool array
        while (!q.empty()) {
        int t = q.front();
        ans.push_back(t);
        q.pop();
        for (auto i : adj[t]) {
        if (arr[i] == 0)
        q.push(i);
        arr[i] = 1;
        }

}
return ans;
	    
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  