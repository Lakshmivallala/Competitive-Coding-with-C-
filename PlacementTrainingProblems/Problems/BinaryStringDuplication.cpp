#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

// Consider a binary string, s, with an initial value of "0". We expand s by performing the following steps:

// Create a string, t, where each character ti is equal to 1 - si. For example, if s = "01", then t = "10". Note that s and t always have the same length because t is the complement of s.
// Append t to the end of s so that s(new) = s + t. In the example above, "01" becomes "0110".
// We keep on expanding s using steps 1 and 2 infinitely. When we repeat the expansion operation, string s grows like this:
// image
// Given queries in the form of a zero-based index, , solve each query by printing the character at index in on a new line.

// Input Format

// The first line contains an integer denoting q (number of queries). Each of the q subsequent lines contains an integer describing the value of x for a query.

// Constraints

// 0 <= x, q <= 1000

// Output Format

// For each query, print the value of s[x] (i.e., either 1 or 0) on a new line.

// Sample Input 0

// 3
// 2
// 5
// 7
// Sample Output 0

// 1
// 0
// 1

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[10000]="0",t[10000];
    int i;
    while(strlen(s)<1000) //cant form an infinite string so form one of 1000 and stop
    {
        i=0;
        while(s[i])
        {
            if(s[i]=='0')
                t[i]='1';
            else
                t[i]='0';
            i++;
        }
        t[i]='\0';
        strcat(s,t);
    }
    int q,x;
    cin>>q;
    for(int i=0;i<q;i++)
        {
            cin>>x;
            cout<<s[x]<<endl;
        }
    return 0;
}