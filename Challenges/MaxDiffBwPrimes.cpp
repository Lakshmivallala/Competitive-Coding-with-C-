#include <iostream>
using namespace std;


// A range [ L , R ] (both inclusive) and you have to tell him the maximum difference 
// between the prime numbers in the given range. There are three answers possible for 
// the given range. 1) There are two distinct prime numbers in the given range so the 
// maximum difference can be found. 2) There is only one distinct prime number in the 
// given range. The maximum difference in this case would be 0. 3) There are no prime 
// numbers in the given range. The output for this case would be -1.


// Input Format
// The first line of input consists of the number of test cases, T
// Next T lines each consists of two space-separated integers, L and R

// Example:
// Range: [ 1, 10 ]
// The maximum difference between the prime numbers in the given range is 5.
// Difference = 7 - 2 = 5
// Range: [ 5, 5 ]
// There is only one distinct prime number so the maximum difference would be 0.
// Range: [ 8 , 10 ]
// There is no prime number in the given range so the output for the given range would be -1.

int main()
{
	//Write code here
	int t;
	cout<<"Enter t: "<<endl;
	cin>>t;
	while(t--)
	{
		int L,R;
		int flag,i,j,k=0;
		cout<<"Enter L and R (L,R): "<<endl;
		cin>>L;
		cin>>R;
		int a[R];
		for( i=L;i<=R;i++)
		{
			flag=0;
			for( j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				a[k]=i;
				k++;
			}
		}

		int n;
		n=sizeof(a)/sizeof(a[0]);
		int maxd=a[1]-a[0];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if (abs(a[j]-a[i])>maxd)
				maxd=a[j]-a[i];
			}
		}
		if(sizeof(a)==0)
		maxd=-1;
		if(sizeof(a)==1)
		maxd=0;
		cout<<maxd<<endl;
	}
}