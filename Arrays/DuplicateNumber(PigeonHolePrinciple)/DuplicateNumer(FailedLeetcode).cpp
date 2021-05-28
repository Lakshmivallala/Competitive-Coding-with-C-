#include<iostream>
#include<bits/stdc++.h>

//Pigeon Hole principle: If n items are put into m containers, where n>m, then at least 
//one container must have more than one item

//Works but fails on leetcode check

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n;
        n=nums.size();
        int ans;
        int res;
        for(int i=0;i<n;i++)
        {
            ans=count(nums.begin(),nums.end(),nums[i]);
            if (ans>1)
                res=nums[i];
        }
            return res;

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
    cout<<ob.findDuplicate(nums);

    
    
}


