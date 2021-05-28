#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	vector<int> PrintSpiral(vector<vector<int>> &matrix)
	{	
		vector<int> ans;

		if(matrix.size()==0)
			return ans;

		int R=matrix.size();//row size
		int C=matrix[0].size();//column size

		int T=0, B=R-1, L=0, R=C-1;
		int dir=0;

		while(T<=B && L<=R)
		{
			if(dir==0)
			{
				for(int i=L;i<R;i++)
				{
					print(matrix[T][i]);
				}
				T++;
				dir=1;
			}
		}

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
	for(int x:ob.PrintSpiral(vv))
	{
		cout<<x<<" ";	
	}
}