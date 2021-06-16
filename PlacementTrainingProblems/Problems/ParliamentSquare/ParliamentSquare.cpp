#include<stdio.h>
#include<math.h>

/*
Parliament in the capital city of Delhi has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Parliament Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input Format

The input contains three positive integer numbers in the first line: n,  m and a.

Constraints

1 ≤  n, m, a ≤ 10^9

Output Format

Write the needed number of flagstones.

Sample Input 0

6 6 4
Sample Output 0

4
*/
int main(void)
{
    double n,m,a;
    scanf("%lf %lf %lf", &n,&m,&a);
    printf("%1.lf\n", ceil(n/a)*ceil(m/a));

    return 0;
}