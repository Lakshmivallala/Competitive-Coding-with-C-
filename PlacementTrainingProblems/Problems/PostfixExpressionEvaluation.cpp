#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and calculates the value of a given postfix expression.

INPUT

First line contains one string denoting the postfix expression.
Second line contains space separated integers, each integer denotes the value of a variable, where the first integer denotes the value of the 'A', second integer denotes the value of 'B' and so on.
It is guaranteed that there will be as many integers on second line as there are distinct variables in the postfix expression and that they will be the initial characters of the capital letter alphabet.

Look at the sample Input/Output for clarity

OUTPUT

Output one number denoting the final value of the expression.

Sample Input 0

AB+
3 7
Sample Output 0

10*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch[1005];
    int s[1005],top=-1;
    cin>>ch;
    int i=0;    
    while(ch[i])
    {
        if(ch[i]>=65 && ch[i]<=90) //ascii values
        //or if(ch[i]>='A' && ch[i]<='Z')
        {
            int x;
            cin>>x;
            s[++top]=x;
        }
        else if(ch[i]=='+')
        {
            int x,y;
            y=s[top--];
            x=s[top--];
            s[++top]=x+y;
        }
        else if(ch[i]=='-')
        {
            int x,y;
            y=s[top--];
            x=s[top--];
            s[++top]=x-y;
        }
        else if(ch[i]=='*')
        {
            int x,y;
            y=s[top--];
            x=s[top--];
            s[++top]=x*y;
        }
        else if(ch[i]=='/')
        {
            int x,y;
            y=s[top--];
            x=s[top--];
            s[++top]=x/y;
        }
        i++;
    }
    cout<<s[top];
    return 0;
}

