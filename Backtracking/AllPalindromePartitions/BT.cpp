#include<iostream>
#include <vector>

using namespace std;

// OUTPUT:
// r o t a t o r 
// r o tat o r 
// r otato r 
// rotator 
// r a d a r 
// r ada r 
// radar 
// n i t i n 
// n iti n 
// nitin

bool isPalindrome(string s,int low, int high)
{
	while(low<high)
	{
		if(s[low]!=s[high])
			return false;
		low++;
		high--;
	}
	return true;
}

void allPalindromePartitionUtil(vector<vector<string>> &allPalPar,vector<string> &currPalPar, int start,int n,string s)
{
	if(start>=n)
	{
		allPalPar.push_back(currPalPar);
		return;
	}
	for(int i=start;i<n;i++)
	{
		if(isPalindrome(s,start,i))
		{
			currPalPar.push_back(s.substr(start,i-start+1));
			allPalindromePartitionUtil(allPalPar,currPalPar,i+1,n,s);
			currPalPar.pop_back();
		}
	}
}

void allPalindromePartition(string s)
{
	int n=s.length();
	vector<vector<string>> allPalPar;
	vector<string> currPalPar;
	allPalindromePartitionUtil(allPalPar,currPalPar,0,n,s);
	for(int i=0;i<allPalPar.size();i++)
	{
		for(int j=0;j<allPalPar[i].size();j++)
			cout<<allPalPar[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	string s1="rotator";
	string s2="radar";
	string s3="nitin";
	allPalindromePartition(s1);
	allPalindromePartition(s2);
	allPalindromePartition(s3);
	return 0;
}