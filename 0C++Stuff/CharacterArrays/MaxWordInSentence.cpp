#include<iostream>

using namespace std;


//FROM THE INTERNET:
// char arr1[5];
// char arr2[5];
// cin>>arr1;
// cin>>arr2;

// suppose we work out this  way and run the terminal, we will put 1st word 
//and to put second word we have will press  enter/space key right but our 
//compiler will think the second word is space/enter since it is part of 
//character domain. So to ignore the enter key or space  key the ignore function 
//is   used. So whenever  there is a cin function before cin>>char we have 
//to put ignore() in between 

int main()
{	
	int n;
	cin>>n;
	cin.ignore();
	char a[n+1];
	cin.getline(a,n);
	cin.ignore();
  	
  	int i=0,currLen=0,maxLen=0;

  	while(true)
  	 {
  	 	// if(a[i]== " " || a[i]=='\0') DOUBLE QUOTES GAVE THE ERROR:
//ISO C++ forbids comparison between pointer and integer [-fpermissive]

//space is in character range, so ' ' (confirm)
  	 	if(a[i]== ' ' || a[i]=='\0')
  	 	{
  	 		if(currLen>maxLen)
  	 		{
  	 		maxLen=currLen;
  	 		}
   	 	currLen=0;
  	 	}

  	 	else
  	 	{
  	 		currLen++;
  	 	}

  	 if(a[i]=='\0')
  	 	break;
  	 

  	 	i++;
  	 }

  	 cout<<maxLen;


  return 0;
}