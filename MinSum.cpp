#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n,k,sum=0,i=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	while(k--)
	{
		a[i]=floor(a[i]/2);
		if(i<n-1 && a[i]<a[i+1])
			i++;
		if(i==n)
			break;

	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}