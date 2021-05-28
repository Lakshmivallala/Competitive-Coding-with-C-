#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){        
        
        int minim = INT_MAX, maxim = INT_MIN;
	for (int i=0; i<r; i++)
	{
	        minim=min(minim,matrix[i][0]);
	        maxim=max(maxim,matrix[i][c-1]);
	}

	int DMed = (r * c + 1) / 2;
	while (minim < maxim)
	{
		int mid = minim + (maxim - minim) / 2;
		int count = 0;

		for (int i = 0; i < r; ++i)
			count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
		if (count < DMed)
			minim = mid + 1;
		else
			maxim = mid;
	}
	return minim;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  