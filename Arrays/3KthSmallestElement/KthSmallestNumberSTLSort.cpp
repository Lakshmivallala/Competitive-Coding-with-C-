#include<bits/stdc++.h>
using namespace std;

//Time complexity of this solution = O(log n)
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
    sort(arr,arr+r);
    return arr[k-1];
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
  cout<<ob.kthSmallest(arr,0,5,k)<<endl;
}