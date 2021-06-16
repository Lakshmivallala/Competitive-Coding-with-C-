#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
The binary number system only uses two digits, 0 and 1. You are required to calculate the length of the longest contiguous subarray that has all ones in the array. Implement the function ‘MaxBinaryStringLen’ and return the length of the largest window of 1s.

Input Format

The First line contains N, the number of elements in the array
The next N integers contain 0 or 1.

Constraints

1<= N <= 100000

Output Format

Return the value asked.

Sample Input 0

10
1 0 0 1 1 0 0 0 1 1 
Sample Output 0

2*/
int maxBinStr(int n,int *a)
{
    int max=0,sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum++;
            if(sum>max)
                max=sum;
            
        }
        else
        {
            sum=0;
        }
    }
    return max;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res=maxBinStr(n,a);
    cout<<res;
    return 0;
}
