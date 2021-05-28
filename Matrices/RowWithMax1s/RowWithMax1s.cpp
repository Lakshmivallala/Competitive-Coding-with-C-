#include <bits/stdc++.h>
using namespace std;

//Works on few, failed on GFG
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int M=0;
	    int r=-1;
	    for(int i=0;i<n;i++)
	    {
	        int c1=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                c1++;
	            }
	            else
	            {
	                break;
	            }
	        }
	        if(c1>M)
	        {
	            M=c1;
	            r=i;
	        }
	    }
	  	return r;

	}

};

// { Driver Code Starts.
int main() {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
            return 0;
}
