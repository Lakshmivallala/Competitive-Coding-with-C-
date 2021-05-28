//Standard library function defined in header
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{10,20,30,40,50,60,70,80};
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	cout<<endl;

	vector<int> :: iterator iter up1,up2;
	up1=upper_bound(v.begin(),v.end(),35);
	up2=upper_bound(v.begin(),v.end(),50);
	cout<<up1<<" "<<up2<<" " << up1-v.begin<< up2-v.begin<<endl;

}