#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
        int n,x;
        cout<<"Enter n and x"<<endl;
        cin>>n>>x;
        int arr[n],i;
        cout<<"Enter elements"<<endl;
        for(i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Done"<<endl;
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    
    return 0;
}

vector<int> find(int arr[], int n , int x )
{
    int f=-1,l=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            f=i;
            break;
        }
    }
    
    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]==x)
        {
            l=j;
            break;
        }
    }
    
    return {f,l};
}
