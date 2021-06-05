#include<iostream>

using namespace std;

//Character arrays are arrays of characters
// OUTPUT:
// M
// o
// r
// n
// i
// n
// g
int main()
{
	//char a[n+1]; n+1 since last character is for null character \0
	//Null character tells us that the array has ended
	//We use the null character since C++ compiler doesnt understand when 
	//the array has ended

	//Initialising an array of character datatype
	char a[10]="Morning"; //can fill only 9 characters
	int i=0; //initialising condition don't forget the 0

	//Priting out the character array
	while(a[i]!= '\0')
	{
	cout<<a[i]<<endl; //try outputing '\0' as well
	i++;
	}


	return 0;
}