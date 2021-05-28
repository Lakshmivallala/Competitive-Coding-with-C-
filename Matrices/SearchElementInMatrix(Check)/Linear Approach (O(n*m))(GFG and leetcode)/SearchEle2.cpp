#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int N,int M,int target) {
        int flag=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if (matrix[i][j]==target)
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
};

int main()
{
	// int t;
	// cin>>t;

	int n,m;
	cout<<"Enter n and m"<<endl;
	cin>>n>>m;

	vector<vector<int>> a (n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
		cout<<"Enter a["<<i<<"]["<<j<<"] "<<endl;
	cin>>a[i][j];
	}
	}
	
	int x;
	cout<<"Enter x"<<endl;
	cin>>x;
	Solution ob;
	cout<<ob.searchMatrix(a,n,m,x)<<endl;
}