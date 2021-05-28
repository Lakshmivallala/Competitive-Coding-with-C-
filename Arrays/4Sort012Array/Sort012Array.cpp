#include<bits/stdc++.h>

using namespace std;

// sort an array with 0, 1 and 2 in a single pass
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
        if(a[mid]==0)
        {
           swap(&a[low],&a[mid]);
           low++;
           mid++;
        }
        
        else if(a[mid]==2)
        {
            swap(&a[mid],&a[high]);
            high--;
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

  


// #include<bits/stdc++.h>

// using namespace std;
// class Solution{
//     public:
// // sort an array with 0, 1 and 2 in a single pass
// void swap(int *a,int * b)
// {
//     int t=*a;
//     *a=*b;
//     *b=t;
// }
// void sortColors(int a[])
// {

//     int low, mid, high;
//     low=0;
//     mid=0;
//     int n= sizeof(a)/sizeof(a[0]);
//     high=n-1;
//     while(mid<=high)
//     {
//         if(a[mid]==0)
//         {
//            swap(&a[low],&a[mid]);
//            low++;
//            mid++;
//         }
        
//         else if(a[mid]==2)
//         {
//             swap(&a[mid],&a[high]);
//             high--;
//         }
//         else
//         {
//                 mid++;
//         }
//     }

// }
// };

// int main()
// {
//   int n;
//   cout<<"Enter n ";
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     cout<<"Enter element "<<i<< " "; 
//     cin>>arr[i];
//   }

//     Solution ob;
//     ob.sortColors(arr);

// for(int i=0;i<n;i++)
//   {
//     cout<<arr[i]<< " " ;
//   }


// }

