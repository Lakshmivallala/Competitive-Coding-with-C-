#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Works here, doesnt work on GFG

//Observe the below example:
// 0000111 R1
// 0000011 R2
// 0011111 R3
// 0111111 R4
// 0001111 R5

//we can observe that Row 3 has max 1s since comparing column wise,
//1 first appears in row 3 only. Hence it must have more 1s than the rest 
//since all rows are sorted 
//Technically, the first 1 that appears in a column is the answer row 

//https://www.youtube.com/watch?v=sxSXdSnjtgQ

int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{	
	    int i,j,res=-1;
	    //OBSERVE!!
		for( j=0;j<m;j++) //column wise
		{
			for( i=0;i<n;i++)
			{
				if(arr[i][j]==1) //OBSERVE [i][j]
				{
					return i;	 
				}
			}
		}
		return res;
	}
int main() 
{
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                cin>>arr[i][j];
            }
        }
        cout<< rowWithMax1s(arr, n, m);
}
