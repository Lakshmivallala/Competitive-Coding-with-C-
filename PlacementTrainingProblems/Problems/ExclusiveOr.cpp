#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// Find the XOR of two numbers and print it.

// Hint : Input the numbers as strings.

// Input Format

// First line contains first number X and second line contains second number Y.
// The numbers will be given to you in binary form.

// Constraints

// 0 <= X <= 2^1000
// 0 <= Y <= 2^1000

// Output Format

// Output one number in binary format, the XOR of two numbers.

// Sample Input 0

// 11011
// 10101
// Sample Output 0

// 01110

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a[1001], b[1001]; //1 additional for the null character
    cin>>a; //%s for c, and no & to take input for strings
    cin>>b;
    // cout<<x ^ y; Can use this when input is numbers, we are using the decimal form of numbers
    int n,m;
    n=strlen(a);
    m=strlen(b); 
    int i=0,j=0;
    while(n>m)
    {
        cout<<a[i];
        i++;
        n--;
    }
    while(m>n)
    {
       cout<<b[j];
        j++;
        m--;
    }
    while(a[i]) //or b[j] or while (a[i] && b[j])
    {
        if(a[i]==b[j])
            cout<<"0";
        else
            cout<<"1";
        i++;j++;
    }
    
    return 0;
}
