#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
  	{
  		string s;
  		getline(cin,s);
  		
      int count,i,j;

      for( i=0;i<s.size();i++)
        {
          count =1;
          for( j=i+1;j<s.size();j++)
          {
            if(s[i]==s[j] && s[i]!=' ')
            {
              count++;
              s[j]='0';
            }
          }
        }

        if(count>1 && s[i]!='0')
          cout<<s[i];
  	}

  return 0;
}