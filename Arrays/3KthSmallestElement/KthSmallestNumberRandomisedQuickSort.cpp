#include<bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) 
    {
      if(k>0 && k<=r-l+1)
      {
        int pos= RandomPartition(arr,l,r);

        if (pos - l == k-1)
          return arr[pos]; //if the pivot element position is equal to k, return that element
        // quick sort= pivot is always sorted, the left and right need to be internally sorted 
        //so pivot is in the right place

        if (pos-l>k-1)
          return kthSmallest(arr,l,pos-1,k); //left side sort

        return  kthSmallest(arr,pos+1,r,k-pos+l-1); //else right sort

      }    
      return INT_MAX; //if k > n, returns 2147483647
    }



    void swap(int * a,int * b)
    { 
      int t=*a;
      *a=*b;
      *b=t;
    } 



    int partition(int arr[], int l, int r)
    {
      int j=arr[r]; //choosing last element as pivot element
      int i=l; 
      for(int a=l;a<=r-1;a++)
      {
        if(arr[a]<=j) // if array element is less than the pivot element (last element)
        {
          swap(&arr[i],&arr[a]); //swap them 
          i++;
        }
      }
      swap(&arr[i],&arr[r]);
      return i;
    }  


    int RandomPartition(int arr[],int l, int r)
    {
      int n=r-l+1;
      int pivot=rand()%n; //random number between 0 to n-1
      swap(&arr[l+pivot],&arr[r]);

      return partition(arr,l,r);
    }

};


int main()
{
  int n;
  cout<<"Enter n";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter element "<<i; 
    cin>>arr[i];
  }

  Solution ob;
  int k;
  cout<<"Enter k";
  cin>>k;
  cout<<ob.kthSmallest(arr,0,n-1,k)<<endl;
}