#include<iostream>
#include<bits/stdc++.h>

//Find the median in a row wise sorted Matrix
//NaiveApproach
//Median = (n+1)/2 for number of odd elements, (n/2) for even elements
//In our question, n is always odd since (r*c) is always odd 
//Insert matrix elements into an array, sort it and find median

//Not a really good approach
//Time complexity of O(r*c(log(r*c)))
//Space complexity O(r*c) for Auxiliary/Extra array a
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int ind=0;
        int a[r*c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                a[ind]=matrix[i][j];
                ind++;
            }
        }
        
        sort(a,a+r*c);
        int med=(r*c)/2;
        
        return a[med];
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