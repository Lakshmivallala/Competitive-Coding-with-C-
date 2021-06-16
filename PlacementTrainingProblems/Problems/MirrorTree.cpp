#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
When a tree is reflected across an imaginary straight vertical line right or left of the entire tree, the resultant tree hence obtained is the mirror tree of the original tree.

Your task is to write a program to check if two given trees are mirrors of each other.

Input
First line consists of the number of nodes N.
Next N-1 lines each describes the first tree. Each line has two integers U and V and a letter 'R' or 'L', denoting that V is the left or the right child of U.
Next N-1 lines each describes the second tree. Each line has two integers U and V and a letter 'R' or 'L', denoting that V is the left or the right child of U.

Output
Print "yes" if the two trees are mirrors of each other and "no" otherwise

Sample Input 0

3
1 2 R
1 3 L
1 2 L
1 3 R
Sample Output 0

yes
Explanation 0

The first tree is

  1 

 / \ 

3   2
The second tree is

  1 

 / \ 

2   3
Clearly, both the trees are mirrors of each other.
*/


int t1[1001][2],t2[1005][2];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; 
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        char c;
        //scanf("%d %d %c")//if there is no space between %d and %c, space is taken as space %d %d  or %d%d no problem
        cin>>x>>y>>c;
        if(c=='L')
            t1[x][0]=y;
        else
            t1[x][1]=y;
    }
    
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        char c;
        //scanf("%d %d %c")//if there is no space between %d and %c, space is taken as space %d %d  or %d%d no problem
        cin>>x>>y>>c;
        if(c=='L')
            t2[x][0]=y;
        else
            t2[x][1]=y;
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(t1[i][0]!=t2[i][1] || t1[i][1]!=t2[i][0])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
