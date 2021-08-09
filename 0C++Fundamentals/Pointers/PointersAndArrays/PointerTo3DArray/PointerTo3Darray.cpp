#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//OUTPUT:
// 0x7ffd3a7fbbf0 0x7ffd3a7fbbf0 0x7ffd3a7fbbf0 0x7ffd3a7fbbf0 0x7ffd3a7fbbf0
// 5
// 3  6
// 3  4  6  1


	/*
	{ 
	{ 1DArray,1DArray }, 
	{ 1DArray,1DArray },
	{ 1DArray,1DArray }
	};

	{ 
	2DArray,
	2DArray,
	2DArray
	};

	3DArray;
	
	{ 
	{ {2 //C[0][0][0],5 //C[0][0][1]} //C[0][0] ,{7,9} //C[0][1] }, //C[0]
	{ {3,4} //C[1][0],{6,1} //C[1][0] }, //C[1]
	{ {0,8} //C[2][0],{3,6} //C[2][0] }  //C[2]
	};


	*/

int main()
{
	int C[3][2][2]=
	{ 
	{ {2,5},{7,9} }, 
	{ {3,4},{6,1} },
	{ {0,8},{3,6} }
	};


	cout<<C<<" "<<*C<<" "<<C[0]<<" "<<&C[0][0]<<" "<<&C[0][0][0]<<endl; //0x7ffe188d7d60 0x7ffe188d7d60 0x7ffe188d7d60 0x7ffe188d7d60 0x7ffe188d7d60
	cout<<*(C[0][0]+1)<<endl; //go to C, go to C[0], go to C[0][0], 
	cout<<*(C[2][1]+0)<<"  "<<*(C[2][1]+1)<<endl;
	cout<<*(C[1][0]+0)<<"  "<<*(C[1][0]+1)<<"  "<<*(C[1][0]+2)<<"  "<<*(C[1][0]+3)<<endl;
	return 0;
}