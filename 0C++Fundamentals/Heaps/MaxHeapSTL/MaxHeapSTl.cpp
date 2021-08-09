#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// O/p:
// 3
// 2

//max heap is a priority queue in STL
int main()
{
	priority_queue<int,vector<int>> pq;
	pq.push(2);
	pq.push(3);
	pq.push(1);

	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;

	return 0;
}