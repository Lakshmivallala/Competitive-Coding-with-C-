#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	vector<int> PrintSpiral(vector<vector<int>> &matrix)
	{

		return 0;
	}
};

int main()
{
	vector<vector<int>> vv;
	int n,m;
	cin>>n;
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

	//priting out the matrix
	for(int i=0;i<vv.size();i++)
	{
		for(int j=0;j<vv[i].size();j++)
		{
			cout<<vv[i][j]<<"   ";
		}
		cout<<endl;
	}

	Solution ob;
	cout<<ob.PrintSpiral(vv);

	return 0;
}