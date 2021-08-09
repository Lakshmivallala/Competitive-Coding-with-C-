#include <bits/stdc++.h>  //header file that includes all the standard libraries
#include<algorithm>
using namespace std; //IpOp

// https://github.com/Lakshmivallala/Sudoku-Solver/blob/master/Sudoku.txt
//i=Row, j=Column

//Time complexity: O(9^(n*n))
//Space Complexity: O(n*n). (To store output array a matrix is needed)

#define EMPTY 0 //creating a macro used as constants throughout the code

#define N 9 /* Considering a 9x9 matrix.
Can be generalised for any nxn matrix.
Can set max>9 and use switch case to select any n */

// i=row, j=column

// output:
// 1
// The unsolved SUDOKU is:
// 5 1 7 6 0 0 0 3 4 
// 2 8 9 0 0 4 0 0 0 
// 3 4 6 2 0 5 0 9 0 
// 6 0 2 0 0 0 0 1 0 
// 0 3 8 0 0 6 0 4 7 
// 0 0 0 0 0 0 0 0 0 
// 0 9 0 0 0 0 0 7 8 
// 7 0 3 4 0 0 5 6 0 
// 0 0 0 0 0 0 0 0 0 

// The solved SUDOKU is:
// 5 1 7 6 9 8 2 3 4 
// 2 8 9 1 3 4 7 5 6 
// 3 4 6 2 7 5 8 9 1 
// 6 7 2 8 4 9 3 1 5 
// 1 3 8 5 2 6 9 4 7 
// 9 5 4 7 1 3 6 8 2 
// 4 9 5 3 6 2 1 7 8 
// 7 2 3 4 8 1 5 6 9 
// 8 6 1 9 5 7 4 2 3 

bool findemptylocation(int sud[N][N], int &i, int &j); // finds empty unassigned locations from array  

bool okay(int sud[N][N],int i, int j, int key); //checks if key can be placed or not

bool sudoku(int sud[N][N]) //checks if the number 'key' can be placed after checking the corresponding row, column and grid
{
    int i,j;
    if(!findemptylocation(sud,i,j))
    return true;
   
    for(int key=1;key<10;key++)
    {
        if(okay(sud,i,j,key))
        {
            sud[i][j]=key;
            if (sudoku(sud))
                return true; //done
            sud[i][j]=EMPTY; //failed
        }
    }
    return false; //leads to backtracking
   
}

bool findemptylocation(int sud[N][N], int &i, int &j) //finds an empty location in the array
{
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            if(sud[i][j] == EMPTY)
                return true;
    return false;    
}


bool RowCheck(int sud[N][N],int i, int key) //checks if the key is present in the corresponding row
{
    for(int j=0;j<N;j++)
        if(sud[i][j] == key)
            return true;
    return false;
}

bool ColCheck(int sud[N][N],int j, int key) //checks if the key is present in the corresponding column
{
    for(int i=0;i<N;i++)
        if(sud[i][j] == key)
            return true;
    return false;
}


bool GridCheck(int sud[N][N],int k, int l, int key) //checks if the key is present in the corresponding 3x3 grid
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(sud[i+k][j+l] == key)
                return true;
    return false;
}


bool okay(int sud[N][N],int i, int j, int key) //checks if key isn't there corresponding row, column and grid
{
    return !RowCheck(sud,i,key) && !ColCheck(sud,j,key) && !GridCheck(sud,i-i%3, j-j%3,key) && sud[i][j] == EMPTY;
}





void print(int sud[N][N]) //to print the final sudoku
{
    cout<<"The solved SUDOKU is:\n";
    for(int i=0;i<N;i++)
    {
    for(int j=0;j<N;j++)
            cout<<sud[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int A[N][N] =
    {{5,1,7,6,0,0,0,3,4},
    {2,8,9,0,0,4,0,0,0},
    {3,4,6,2,0,5,0,9,0},
    {6,0,2,0,0,0,0,1,0},
    {0,3,8,0,0,6,0,4,7},
    {0,0,0,0,0,0,0,0,0},
    {0,9,0,0,0,0,0,7,8},
    {7,0,3,4,0,0,5,6,0},
    {0,0,0,0,0,0,0,0,0}};
    
    int B[N][N]=
    {{ 0, 9, 0, 0, 0, 0, 8, 5, 3 },
	{ 0, 0, 0, 8, 0, 0, 0, 0, 4 },
	{ 0, 0, 8, 2, 0, 3, 0, 6, 9 },
	{ 5, 7, 4, 0, 0, 2, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 9, 0, 0, 6, 3, 7 },
	{ 9, 4, 0, 1, 0, 8, 5, 0, 0 },
	{ 7, 0, 0, 0, 0, 6, 0, 0, 0 },
	{ 6, 8, 2, 0, 0, 0, 0, 9, 0 }};

    int C[N][N]= {{6,5,0,8,7,3,0,9,0},
    {0,0,3,2,5,0,0,0,8},
    {9,8,0,1,0,4,3,5,7},
    {1,0,5,0,0,0,0,0,0},
    {4,0,0,0,0,0,0,0,2},
    {0,0,0,0,0,0,5,0,3},
    {5,7,8,3,0,1,0,2,6},
    {2,0,0,0,4,8,9,0,0},
    {0,9,0,6,2,5,0,8,1}};

    // 0 implies that there is no number assigned to that particular cell
    
    cout<<"Enter 1 for sample unsolved SUDOKU 1\n";
    cout<<"Enter 2 for sample unsolved SUDOKU 2\n";
    cout<<"Enter 3 for sample unsolved SUDOKU 3\n";
    
    int take;
    cin>>take;
    int sud[N][N];
    if(take==1)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                sud[i][j]=A[i][j];
            }
        }
    }
    else if(take==2)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                sud[i][j]=B[i][j];
            }
        }
    }
    else
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                sud[i][j]=C[i][j];
            }
        }
    }
    
    
    cout<<"The unsolved SUDOKU is:\n";
    for(int a=0;a<N;a++)
    {
        for(int b=0;b<N;b++)
        {
            cout<<sud[a][b]<<" ";
        }
    cout<<"\n";
        
    }
    cout<<"\n";
    
    if(sudoku(sud)==true)
        print(sud);
    else
        cout<<"Not possible";
   
    return 0;
}
