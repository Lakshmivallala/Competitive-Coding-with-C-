#include<iostream>
#include<bits/stdc++.h>

//https://www.youtube.com/watch?v=ZYpYur0znng

using namespace std;

class Solution {
public:
    int searchMatrix(vector<vector<int>>& mat, int n, int m, int x) {
        
    if (n == 0)
        return -1;

    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << "n Found at "
                 << i << ", " << j;
            return 1;
        }
        if (mat[i][j] > x)
            j--;
       
        // Check if mat[i][j] < x
        else
            i++;
    }
 
    cout << "n Element not found";
    return 0;

    }
};

int main()
{
    vector<vector<int>> vv;
    int n,m;
    cout<<"Enter n "<<endl;
    cin>>n;
    cout<<"Enter m "<<endl;
    cin>>m;
    int ele;
    //taking input into matrix
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        vector<int> v1;
        for(int j=0;j<m;j++)
        {
            cin>>ele;
            v1.push_back(ele);
        }
        vv.push_back(v1);
    }
    int x;
    cout<<"Enter x "<<endl;
    cin>>x;
    Solution ob;
    cout<<ob.searchMatrix(vv,n,m,x);
}