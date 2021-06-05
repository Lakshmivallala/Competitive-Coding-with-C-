#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/search-in-rotated-sorted-array/solution/
//Works on leetcode but we need to also write some code to rotate the 
//array in main function

//https://www.geeksforgeeks.org/array-rotation/ (array rotation at an index)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
                return i;
        }
        
        return -1;
    }
};

int main()
{
  //Code for rotating sorted array at a target index 
	int arr[]={0,1,2,3,4,5,6,7}, ind;
	cout<<"Enter index at which rotation must be done"<<endl;
	cin>>ind;
	int n= sizeof(arr)/sizeof(arr[0]);
	int temp[n];
	for(int i=0;i<ind;i++)
	{
		for(int j=0;j<ind;i++)
	{
		temp[j]=arr[i];
	}
	}


	int s;
	s=0;

	for(int i=0;i<n;i++)
	{
		swap(arr[s],arr[ind]);
		s++;
		ind++;
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}


  return 0;
}