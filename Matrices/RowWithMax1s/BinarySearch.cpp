#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define R 4
#define C 4

//TIME COMPLEXITY O(nlogm), n = n(rows), m= n(colums)

//Check how to define bool vector of vector

//Binary search can be used since each row is sorted
//Elements are sorted i.e 1s remian to the right only
int first(bool a[],int low, int high){ //OBSERVE parameters
	if(high>=low)
	{
		int mid;
		mid=low+(high-low)/2;

		//mid element is 1?
		if((mid==0||a[mid-1]==0) && a[mid]==1) //for mid =1, 
		//mid-1 must be a zero and mid must be 1
			return mid; 
		//mid==0 means no elements or 1 element? CHECK

		else if(a[mid]==0) //if we havent reached 1 yet, 1s are on right side
			return first(a,(mid+1),high); //recursion on right side 

		else //if we might have more 1s to the left
			return first(a,low,(mid-1)); //recursion on right side
	}
	return -1;
}


int rowWithMax1s(bool mat[R][C])
{
	int maxRInd=0, max=-1;
	int i,ind;
	for(i=0;i<R;i++)
	{
		ind=first(mat[i],0,C-1); //OBSERVE parameters
		if(ind!=-1 && C-ind>max)
		{
			max=C-ind;
			maxRInd=i;
		}
	}
	return maxRInd;
}



int main()
{
  bool mat[R][C]= 
  {{0,0,0,1}, {0,1,1,1}, {1,1,1,1}, {0,0,0,0}};

  cout<<rowWithMax1s(mat);

  return 0;
}
