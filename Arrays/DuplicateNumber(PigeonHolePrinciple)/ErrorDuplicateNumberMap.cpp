class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int res;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            ++mp[nums[i]];
            if(mp[nums[i]] > 1){
                res = nums[i];
                break;
            }
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
    cout<<ob.findDuplicate(nums)<<endl;
}