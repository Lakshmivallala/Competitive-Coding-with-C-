#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
You are given an array of N integers which is a permutation of the first N natural numbers. You can swap any two elements of the array. You can make at most K swaps. What is the largest permutation, in numerical order, you can make?

Input Format

The first line of the input contains two integers, N and K, the size of the input array and the maximum swaps you can make, respectively. The second line of the input contains a permutation of the first N natural numbers.

Constraints

1≤N≤10^5 1≤K≤10^9

Output Format

Print the lexicographically largest permutation you can make with at most K swaps

Sample Input 0

5 1
4 2 3 5 1
Sample Output 0

5 2 3 4 1*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if (k>n)
        k=n;
    for(int i=0;i<k;i++)
    {
        int maxind=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[maxind])
                maxind=j;
        }
        int t=a[i];
        a[i]=a[maxind];
        a[maxind]=t;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    return 0;
    
}
