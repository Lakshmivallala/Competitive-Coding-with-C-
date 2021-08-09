#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class MaxHeap
{
private:
	//C++11 syntax, brace initialization. It initializes the declared 
	//variable to it's default value (in this case 0). Without it, it would 
	//contain a junk value.
	//https://www.youtube.com/watch?v=6jwj2WIRvTE (comment section)
	int _size {}; //same as _size = 0;
	vector<int> vect={-1};

	// bitshifting a number to the left multiplies it by 2, and 
	//bitshifting to the right divides it by 2.
	int p(int i)
	{
		//bitshift right
		return i>>1; //i/2
	};
	int lc(int i)
	{
		return i<<1; //i*2
	};
	int rc(int i)
	{
		return (i<<1)+1; //i*2 + 1
	};
public:
	isEmpty() const 
	{
		return _size==0;
	};	
	int getMax() const 
	{
		return vect[1];
	};
	void insertItem(int val);
	void shiftUP(int i);
	int extractMax();
	void shiftDOWN(int i);
};

void MaxHeapLL::insertItem(int val)
{
	if(_size+1>=vect.size())
	{
		vect.push_back(0);
	}
	vect[++_size]=val;
}

int main()
{

	return 0;
}