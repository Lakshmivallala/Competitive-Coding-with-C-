#include<iostream>
#include<bits/stdc++.h>
//Median is the value that separates the higher half and lower half
//i.e n/2
//Can use binary search to minimise search time

//The matrix is sorted row wise
//Ergo, min number can be found comparing first element of each row
//Similarly, max number can be found by comparing last element of each row

//TIME COMPLEXITY O(32*r*log(c))
//log(c) for upperbound funtion *r since this is performed for each row
//numbers will be max of 32 bit ergo binary search = 32(log2(2*32))=32 operations
//Auxiliary space O(1)

using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int min,max;
        min=INT_MAX; //OBSERVE the opposite assignment
        max=INT_MIN; //OBSERVE

        //pick up min and max element row wise
        for(int i=0;i<r;i++)
        {   //min element (min of first column)
            if(matrix[i][0]<min)
                min=matrix[i][0];
            //max element (max of last column)
            if(matrix[i][c-1]>max)
                max=matrix[i][c-1];
        }

        int med= (r*c+1)/2;
        //iterate over the range(min,max)
        while(min<max)
        {
            int mid=min+(max-min)/2;
            int cou=0;

            //count(smaller than min)
            for(int i=0;i<r;i++)
                cou += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
                // cou += upper_bound(matrix[i], matrix[i]+c, mid) - matrix[i];
            //upperbound(star_iter,end_iter,val) returns iterator to 1st greater element
            //subtract - iterator to get minimum 

            if(cou<med)
                min=mid+1; //the median is greater than selected number
            else
                max=mid; // median is less than or equal to selected number
        }
        return min;
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