/*works on sorted array
however, it doesn't remove duplicate values
can insert these values into a set to avoid duplicate values?
No, sets aren't sorted
Time Complexity: O(m + n)*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
  
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
  
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
  
    /* Print remaining elements of the larger array 
    while (i < m)
        cout << arr1[i++] << " ";
  
    while (j < n)
        cout << arr2[j++] << " ";
}
  
/* Driver program to test above function */
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 ,6};
    int arr2[] = { 2, 3, 5, 7 };
  
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
  
    // Function calling
    printUnion(arr1, arr2, m, n);
  
    return 0;
}

// #include <iostream>

// using namespace std;
// void Union(int *a1,int *a2, int n,int m)
// {
//     int a=n+m;
//     int U[a];
//     for (int i=0;i<n;i++)
//     {
//         U[i]=a1[i];
//     }
//     for (int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a2[i]!=a1[j])
//             {
//                 U[n]=a2[i];
//                 ++n;
//             }
//         }
//     }
//     cout<<"array: ";
//     for (int i=0;i<a;i++)
//     {
//         cout<<U[i]<<"   " ;
//     }

// }

// void Intersection(int *a1,int *a2, int n,int m)
// {

// }

// int main()
// {
//     int n,m;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter m: ";
//     cin>>m;

//     int a1[n], a2[m];
//     cout<<"Enter n elements: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a1[i];
//     }
//     cout<<"Enter m elements: ";
//     for(int i=0;i<m;i++)
//     {
//         cin>>a2[i];
//     }
//     Union(a1,a2,n,m); //can't do Union(&a,&b,n,m) since address of array is a1 (first element)
//     Intersection(a1,a2,n,m);


//     return 0;
// }