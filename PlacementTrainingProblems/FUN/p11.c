#include<stdio.h>

//This doesnt work in c++
//Error: C++ forbids converting a string constant to ‘char*

int main()
{
	char *s="His";
	for(int i=0;i<strlen(s);i++)
		printf("%s",s++);

	return 0;
}