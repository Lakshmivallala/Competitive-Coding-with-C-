#include<iostream>

using namespace std;

#define NO_OF_CHARS 256

//https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/

class Solution
{
public:


void fillCCount(char *s1, int *count)
{
	for(int i=0;*(s1+i);i++)
		count[*(s1+i)]++;
}

void Dups(char *s1)
{
	int *count =  (int *) calloc (NO_OF_CHARS,sizeof(int));
	fillCCount(s1,count);

	for(int i=0;i<NO_OF_CHARS;i++)
		if(count[i]>1)
			cout<<i<<" Count: "<<count[i]<<endl;

	free(count);
}	
};


int main()
{
	Solution ob;
	char s1[]="This is a test string";
	// getline(cin,s1);
	ob.Dups(s1);

  return 0;
}