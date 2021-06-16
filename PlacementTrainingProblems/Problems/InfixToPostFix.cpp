#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

/*
A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and converts a given infix expression into its postfix expression.

INPUT

There will be only a single line of input, the string that denotes the infix expression to be converted into its postfix counterpart.

There are four arithmetic operations and capital letters used as variables/operands.

Look at the sample Input/Output for clarity

OUTPUT

Output the final postfix expression after converting it to postfix from infix.

Sample Input 0

A+B
Sample Output 0

AB+*/

//There are four arithmetic operations 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char inf[1005],s[1005];
    int i=0,top=-1;
    cin>>inf; //%s in C
    while(inf[i]) //Till last char or simply while(inf[i])
    {
        if(inf[i]>='A' && inf[i]<='Z')
            cout<<inf[i];
        else if(inf[i]=='(')
            s[++top]='(';
        else if(inf[i]==')') //delete till (
        {
            while(s[top]!='(')
            {
                cout<<s[top--]; //%c in C
            }
            //now top is (
            top--; //delete that also
        }
        else if(inf[i]=='+' || inf[i]=='-')
            //delete equal and high precedence
        {
            while(top!=-1 && (s[top]=='-' || s[top]=='+' || s[top]=='*' || s[top]=='/' ))
            {
                cout<<s[top--];
            }
            s[++top]=inf[i];
        }
        
        else 
        {
            while(top!=-1 && (s[top]=='*' || s[top]=='/' ))
            {
                cout<<s[top--];
            }
            s[++top]=inf[i];
        }
        i++; //infinite loop if not for this
    }
    while(top!=-1)
        cout<<s[top--];
    return 0;
}
