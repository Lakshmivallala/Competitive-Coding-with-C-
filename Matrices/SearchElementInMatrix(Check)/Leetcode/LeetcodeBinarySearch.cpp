#include<iostream>
#include<bits/stdc++.h>

//https://www.youtube.com/watch?v=ZYpYur0znng
//Time complexity : O(log(m*n)) (binary search on n*m elements)
//Space complexity : O(1) for the ind variable to find index of the matrix 
Space complexity : \mathcal{O}(1)O(1).


using namespace std;

class Solution {
  public:
  bool searchMatrix(vector<vector<int>>& matrix, int x) {
    int m = matrix.size();
    if (m == 0)
        return false;

    int n = matrix[0].size();

    int low = 0, high = m * n - 1;
    int mid, ind;
    while (low <= high) {
      mid = (low + high) / 2;
      ind = matrix[mid / n][mid % n];
      if (x == ind)
          return true;
      else {
        if (x < ind)
            high = mid - 1;
        else
            low = mid + 1;
      }
    }
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