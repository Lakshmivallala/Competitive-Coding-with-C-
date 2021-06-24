#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;

/*
A complete binary tree is a binary tree where every node except the leaf node has two child nodes and the last level of the tree for an edge-height h has 2^h leaf-nodes.

Your task is simple, given the postorder traversal for a complete binary tree, print it's inorder traversal.

The elements in the binary tree are of type character i.e. each node stores one character value.

Input Format

Only one string input denoting the postorder traversal.

Constraints

1 <= input.length <= 1000

Output Format

output one string that denotes the inorder traversal of the binary tree

Sample Input 0

BCA
Sample Output 0

BAC
*/

void inorder(char ch[],int low, int high)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        inorder(ch,low,mid-1);
        cout<<ch[high];
        inorder(ch,mid,high-1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch[1001];
    cin>>ch;
    inorder(ch,0,strlen(ch)-1); //strlen-1index of last element
    return 0;
}
