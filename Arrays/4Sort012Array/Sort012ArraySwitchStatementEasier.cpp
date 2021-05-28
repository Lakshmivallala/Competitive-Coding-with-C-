#include<bits/stdc++.h>

using namespace std;

//https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
// sort an array with 0, 1 and 2 in a single pass

//Time Complexity: O(n)
//Space Complexity: O(1)
void swap(int *a,int * b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void sort012(int a[], int n)
{

    int low, mid, high;
    low=0;
    mid=0;
    high=n-1;
    while(mid<=high)
    {
        

      switch(a[mid])
      {


        case 0: //when element is 0
        swap(a[low++],a[mid++]); //post fix increment (evaluated first, then incremented)
        break;

        case 1: //when element is 1
        mid++;
        break;

        case 2: //when element is 2
        swap(&a[mid],&a[high--]);
        break;

      }

    }

}



int main()
{
  int n;
  cout<<"Enter n ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter element "<<i<< " "; 
    cin>>arr[i];
  }

  sort012(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<< " "; 
    
  }
  cout<<endl;
}