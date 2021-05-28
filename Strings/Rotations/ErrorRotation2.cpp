#include<iostream>
#include<string.h>

using namespace std;

//https://www.youtube.com/watch?time_continue=89&v=-xX8WHd7Ztk&feature=emb_logo

class Solution
{
public:

	bool rotation(char  * s1, char * s2)
	{
		if (s1.length() != s2.length())
			return false;

		char *temp;
		temp =  (char *) malloc(sizeof(char)*(s1.length()*2+1));
		temp[0]='\0';
		strcat(temp,s1);
		strcat(temp,s1);

		void *p;
		p=strstr(temp,s2);
		free(temp);

		if(p!=NULL)
			return 1;
		else
			return 0;
	}


};


int main()
{
  string s1,s2;
  s1="AACD";
  s2="ACDA";
  Solution ob;
  if(ob.rotation(s1,s2))
  	cout<<"The two strings are rotations of each other"<<endl;
  else
  	cout<<"The two strings are not rotations of each other"<<endl;

  return 0;
}