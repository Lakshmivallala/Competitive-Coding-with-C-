#include <iostream>


using namespace std;

//O(n**2)
//That's why it fails 4 test cases

void MoveByOne(int a[], int n)
{
    int x;
    x=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
    
}
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
    for(int i=0;i<k;i++)
    {
        if(sizeof(a)==1)
            break;
        MoveByOne(a, n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}