#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Write a program that takes as input one decimal number N, and prints its binary form.

Input Format

One number N.

Constraints

0 <= N <= 10^18

Output Format

Binary representation of the number N.

Sample Input 0

2
Sample Output 0

10
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin>>n;
    long a[64]; //since i/p from 0 <= N <= 10^18 i.e long
    int i=0,m;
    if(n==0)
    {
        cout<<0;
    }
    while(n>0)
    {
        m=n%2;
        a[i]=m;
        n=n/2; //10 for decimal
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
    return 0;
}
