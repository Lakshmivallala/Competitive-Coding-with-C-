#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<vector<int>> result;

// O/p:
// [2 4 1 3 ][3 1 4 2 ]

//utility function to check if a queen can be placed on board[row][col]
bool isSafe(vector<vector<int>> board,int row, int col)
{
	int i,j;
	int N=board.size();
	//left
	for(int i=0;i<col;i++)
		{ 
		if(board[row][i])
			{return false;}
		}
	//upper diagonal on left
	for(int i=row,j=col;i>=0 && j>=0; j--,i--)
		if(board[i][j])
			return false;

	//lower diagonal on left
	for(int i=row,j=col;j>=0 && i<N; j--,i++)
		if(board[i][j])
			return false;

	return true;
}

bool solveNQUtil(vector<vector<int>> &board, int col)
{
	int N=board.size();
	//base case
	//return true if all queens are placed
	if(col==N)
	{
		vector<int> v;
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				if(board[i][j]==1)
					v.push_back(j+1);
			}
		}
		result.push_back(v);
		return true;
	}

	bool res=false;
	for(int i=0;i<N;i++)
	{
		if(isSafe(board,i,col)) //can queen be placed here?
		{
			board[i][col]=1; //place queen in board[i][col]
			res=solveNQUtil(board,col+1) || res;

			board[i][col]=0; //if no, remove queen from board[i][col]
		}
	}
	return res;
}

vector<vector<int>> nQueen(int n)
{
	result.clear(); //clear() function is used to remove all the elements of the vector container, thus making it size 0
	vector<vector<int>> board(n,vector<int>(n,0));

	if(solveNQUtil(board,0)==false)
		return {};
	sort(result.begin(),result.end());
	return result;
}

int main()
{
	int n=4;
	vector<vector<int>> v = nQueen(n);

	for(auto ar:v)
	{
		cout<<"[";
		for(auto it : ar)
			cout<<it<<" ";
		cout<<"]";
	}

	return 0;
}