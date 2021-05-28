#include<bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;

//O(nlgn)
//Space complexity : O(1) or O(n)

//faster than only 15.83% 
//Memory Usage less than 20.25%
class Solution{
    public:
    int findDuplicate(vector<int>& nums) 
        {
          sort(nums.begin(),nums.end());
          for(int i=0;i<nums.size();i++)
          {
            if(nums[i]==nums[i+1])
            {
              return nums[i];
            }
          }
          return -1; //otherwise return -1 
        }    
    };



int main()
{
  vector<int> nums;
  int ele,n;
  cout<<"Enter n ";
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>ele;
    nums.push_back(ele);
  }
    cout<<"Priting the array"<<endl;
    for (int i = 0; i < nums.size(); ++i) 
    {
        cout<<nums[i]<<" ";
        // cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    Solution ob;
    cout<<ob.findDuplicate(nums)<<endl;
}