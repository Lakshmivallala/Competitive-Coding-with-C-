#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
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
    cout<<ob.searchMatrix(vv,x);
}