#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//I/p:
// 3
// 1
// 3
// 2
// 2
// 3
// 1
//O/p:
// 10

// Chappu is addicted to Paneer! Nikau wants to keep her happy for n days. In order to be happy in i-th day, she needs to eat exactly a[i] kilograms of Paneer.

// There is a big shop uptown and Nikau wants to buy Paneer for her from there. In i-th day, they sell Paneer for pi dollars per kilogram.

// Nikau knows all numbers a1,...,an and p1,...,pn. In each day, he can buy arbitrary amount of Paneer, also he can keep some Paneer he has for the future.

// Nikau is a little tired from cooking Paneer, so he asked for your help. Help him to minimize the total money he spends to keep Chappu happy for n days.

// Input Format

// The first line of input contains integer n (1<=n<=10^5), the number of days.

// In the next n lines, i-th line contains two integers ai and pi (1<=ai, pi<=100), the amount of Paneer Chappu needs and the cost of Paneer in that day.

// Constraints

// 1 <= n <= 10^5

// Output Format

// Print the minimum money needed to keep Chappu happy for n days, in one line.

// Sample Input 0

// 3
// 1 3
// 2 2
// 3 1
// Sample Output 0

// 10

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n],p[n];
    int m=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>p[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(p[i]<p[i+1])
            p[i+1]=p[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+(a[i]*p[i]);
    }
    cout<<sum;
    return 0;
}
