#include<bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;

//O(n)
//Space complexity :O(n), if duplicate element at n-1, insert all elements to get answer

// faster than 5.28%
//Memory Usage: less than 5.50% 
class Solution{
    public:
    int findDuplicate(vector<int>& nums) 
        {
          set<int> S1;
              
          for(int i=0;i<nums.size();i++)
          {
            if (S1.count(nums[i])>0) //ZERO!! observe the zero 
              //since there are only 2 duplicate elements in the whole
              //list in this example
            {
              return nums[i];
            }
            S1.insert(nums[i]);
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