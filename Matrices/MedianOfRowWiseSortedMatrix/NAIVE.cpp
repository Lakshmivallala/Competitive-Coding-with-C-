#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
int median(vector<vector<int>> &v, int r, int c)
{
	vector<int> res;
	for(int i=0;i<r;i++)
		res.insert(res.end(),v[i].begin(),v[i].end());
	sort(res.begin(),res.end());
	return res[res.size()/2];
}
};

int main()
{
	vector<vector<int>> mat;
	int r,c;
	cout<<"Enter n and m"<<endl;
	cin>>r>>c;
    
    int ele;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<r;i++)
    {
    	vector<int> dummy;
    	for(int j=0;j<c;j++)
    	{
    		cin>>ele;
    		dummy.push_back(ele);
    	}
    	mat.push_back(dummy);
    }

    Solution ob;
    cout<<ob.median(mat,r,c);
}
