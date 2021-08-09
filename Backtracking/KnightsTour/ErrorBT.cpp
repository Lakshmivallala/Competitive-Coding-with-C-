#include<iostream>
#include <iomanip>

//https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/

using namespace std;

#define N 8

//TC: O(8N^2)
// knight can have a maximum of 8 moves

void printSol(int sol[N][N])
{
	for(int x=0;x<N;x++)
		{
			for(int y=0;y<N;y++)
					cout<<" "<< setw(2)<<sol[x][y]<<" ";
				cout<<endl;
			}
}

int isSafe(int x,int y,int sol[N][N])
{
	return (x>=0 && x<=N && y>=0 && y<=N && sol[x][y]==-1);
}

int KTUtil(int x,int y,int movei,int sol[N][N],int xMove[N],int yMove[N])
{
	int k,nextx,nexty;
	if(movei==N*N)
		return 1;
	for(k=0;k<8;k++)
	{
		nextx=x+xMove[k];
		nexty=y+yMove[k];
		if(isSafe(nextx,nexty,sol))
		{
			sol[nextx][nexty]=movei;
			if(KTUtil(nextx,nexty,movei+1,sol,xMove,yMove)==1)
				return 1;
			else
				sol[nextx][nexty]=1; //backtrack
		}
	}
	return 0;
}

int KT()
{
	int sol[N][N];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			sol[i][j]=-1;

	int xMove[8]={2,1,-1,-2,-2,-1,1,2};
	int yMove[8]={1,2,2,1,-1,-2,-2,-1};

	sol[0][0]=0;
	if(KTUtil(0,0,1,sol,xMove,yMove)==0)
	{
		cout<<"Solution does not exist"<<endl;
		return 0;
	}
	else
		printSol(sol);

	return 1;
}

int main()
{
	KT();

	return 0;
}