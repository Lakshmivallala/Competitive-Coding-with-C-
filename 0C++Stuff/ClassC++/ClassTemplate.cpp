#include<bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;

// quick sort has best time complexity of O(log n) and worst case complexity O(n**2)

class Solution{
    public:
    int rand(int arr[], vector<int>& nums , int a) 
        {
      
          return 
        }    
    };



int main()
{
  int n;
  cout<<"Enter n";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter element "<<i; 
    cin>>arr[i];
  }

  vector<int> nums;
  int ele,n;
  cout<<"Enter n ";
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>ele;
    nums.push_back(ele);
  }

  Solution ob;
  
  cout<<ob.rand(arr,nums,2)<<endl;
}