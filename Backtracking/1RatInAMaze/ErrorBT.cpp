#include<iostream>

using namespace std;

// TC:O(2^(n^2))
// SC: O(n^2) (for output matrix)

bool solveUtil(int maze[N][N],int x,int y, int sol[N][N]);


void printSol(int sol[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<sol[i][j]< " ";
		}
		cout<<endl;
	}
}

bool isSafe(int maze[N][N],int x,int y)
{
	if(x>=0 && x<N && y>=0 && y<N && maze[x][y]==1)
		return true;
	return false;
}

bool solve(int maze[N][N])
{
	int sol[N][N]= { {0,0,0,0},
				     {0,0,0,0},
					 {0,0,0,0},
					 {0,0,0,0} };

	if(solveUtil(maze,0,0,sol)==false)
	{
		cout<<"Solution doesn't exist"<<endl;
		return false;
	}

	printSol(sol);
	return true;
}

//recursive utility function
bool solveUtil(int maze[N][N],int x,int y, int sol[N][N])
{
	//if (x,y) is the destination
	if(x==N-1 && y==n-1 && maze[x][y]==1)
	{
		sol[x][y]=1;
		return true;
	}

	//is the destination valid?
	if(isSafe(maze,x,y)==true)
	{
		if(sol[x][y]=1) //if its already a part of the solution
			return false;
		sol[x][y]=1; //mark as part of solution

		//moving forward in x direction
		if(solveUtil(maze,x+1,y,sol)==true)
			return true;
		//if not move in y direction
		if(solveUtil(maze,x,y+1,sol)==true)
			return true;
		//backtrack to x direction if y direction doesn't give a solution
		if(solveUtil(maze,x-1,y,sol)==true)
			return true;
		//move upwards in y direciton if moving backwards in x doesn't work
		if(solveUtil(maze,x,y-1,sol)==true)
			return true;

		//if none of them work
		sol[x][y]=0; //unmark x,y from solutions
		return false;
	}
	return false;
}

int main()
{
	int maze[N][N] = { {1,0,0,0},
					   {1,1,0,1},
					   {0,1,0,0},
					   {1,1,1,1} };

	solve(maze);

	return 0;
}