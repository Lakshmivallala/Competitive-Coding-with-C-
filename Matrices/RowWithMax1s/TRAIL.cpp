#include <bits/stdc++.h>
using namespace std;

//Works on GFG, failed here
//Elements are sorted i.e 1s remian to the right only
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int M=m-1;
	    int r=-1;
	    for(int i=0;i<n;i++)
	    {
	        while(M>=0)
	        {
	            if(arr[i][M]==1)
	            {
	                M--;
	                r=i;
	            }
	            else
	            {
	                break;
	            }
	        }
	        
	    }
	  	return r;

	}

};

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
