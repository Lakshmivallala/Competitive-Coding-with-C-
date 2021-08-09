#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// O/p:
// 1
// 2

//For a min heap, we pass an extra parameter greater<int> in a priority queue in STL
int main()
{
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(2);
	pq.push(3);
	pq.push(1);

	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;

	return 0;
}