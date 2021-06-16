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
#include <algorithm>
#include <unordered_map>
#include <iostream>


using namespace std;

/*
Given an array of integers of size n, rotate it's elements towards right K times.

Note: One rotation of the array (a0, a1, a2... an-1, an) results into (an, a1, a2...., an-2, an-1).

Explanation for a Sample i/o

Sample Input: 5 1 3 5 7 9 3

Sample Output: 5 7 9 1 3

Explanation: We have to perform 3 rotations : 1st rotation : 9 1 3 5 7 2nd rotation : 7 9 1 3 5 3rd rotation : 5 7 9 1 3

Input Format

First line contains an integer n. Second line contains n integers, denoting the array a[n]. Third line contains one integer k, the number of times the array is to be rotated.

Constraints

1 <= n <= 1000

Output Format

Output n integers, denoting the array a[n] after rotation.

Sample Input 0

5
1 3 5 7 9
3
Sample Output 0

5 7 9 1 3 
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    k=k%n;
    for(int i=n-k;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-k;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}