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

    int c0, c1, c2;
    c0=0;
    c1=0;
    c2=0;
    for(int i=0;i<n;i++)
    {
        

      switch(a[i])
      {

        //increment counter for 0,1 and 2 respectively

        case 0: //when element is 0
        c0++;
        break;

        case 1: //when element is 1
        c1++;
        break;

        case 2: //when element is 2
        c2++;
        break;

      }

    }

    //add count number of elements to array
    int i=0;
    while(c0>0)
    {
      a[i++]=0;
      c0--;
    }

    while(c1>0)
    {
      a[i++]=1;
      c1--;
    }

    while(c2>0)
    {
      a[i++]=2;
      c2--;
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