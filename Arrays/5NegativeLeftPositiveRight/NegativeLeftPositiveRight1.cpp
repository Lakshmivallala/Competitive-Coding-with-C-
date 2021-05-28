#include<bits/stdc++.h>

using namespace std;

//  put all negative numbers before positive numbers


//If input is positive, 0 is also positive so it is to the right
//No requirement to place 0 before positive numbers
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
        if(a[mid]<0)
        {
           low++;
           mid++;
        }
        
        else if(a[mid]>0)
        {
          if(a[high]<0)
          {
            swap(&a[mid],&a[high]);
          }
          else{
            high--;
          }
        }
        else
        {
                mid++;
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