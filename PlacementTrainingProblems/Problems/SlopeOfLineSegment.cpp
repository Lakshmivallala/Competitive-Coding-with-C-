#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
In the town of line segments two line segments can only become friends if their slopes are equal. Line segments are not smart enough to calculate their own or some other line segment's slope so they use a machine called the slopeFinder to check their compatibility. Recently someone stole the slopeFinder and now the line segments are upset because they cannot make new friends. The Mayor of the town has hired you to write a code to fix the crisis that their town is facing.

Input Format

Input Contains two line segments each on a line of its own. Each line segment is denoted by four integers Xa, Ya, Xb and Yb where (Xa,Ya) and (Xb, Yb) denote the two end points of the line segment.

Constraints

0 <= |Xa|,|Xb|,|Ya|,|Yb| <= 100

Output Format

Output "yes" if both the line segments have the same slope and "no" otherwise. (without the quotes).

Sample Input 0

0 0 1 1
1 0 2 1
Sample Output 0

yes
Sample Input 1

0 0 1 1
2 1 3 0
Sample Output 1

no
*/

int findSlope(int xa,int ya, int xb, int yb)
{
    int slopeM;
    int x,y;
    x=xb-xa;
    y=yb-ya;
    if(x==0)
        return -1;
    else
        slopeM= (y)/(x);
    return slopeM;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int xa1,ya1;
    int xb1,yb1;
    int xa2,ya2;
    int xb2,yb2;
    cin>>xa1>>ya1>>xb1>>yb1;
    cin>>xa2>>ya2>>xb2>>yb2;
    int m1,m2;
    m1=findSlope( xa1, ya1, xb1, yb1);
    m2=findSlope( xa2, ya2, xb2, yb2);
    if(m1==m2)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
