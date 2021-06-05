#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v1)
{
	for (int i = 0; i < v1.size(); ++i)	
	{
		cout<<v1[i]<<" ";
		//can also write: 
		// cout<<v1.at(i)<<" ";
		//returns element AT index i
	}
	cout<<endl;

}
int main()
{
	vector<int> v1;
	int ele,n;
	cout<<"Enter n ";
	cin>>n;
	//input elements into std::vector<char> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		v1.push_back(ele);
	}

	//display elements from the vector
	// for (int i = 0; i < v1.size(); ++i)
	// {
	// 	cout<<v1[i]<<" ";
	// }

	display(v1);
	v1.pop_back(); //pops last element
	display(v1);

	vector<int>::iterator iter=v1.begin();
	v1.insert(iter,999); //adds 999 at begin() - beginning position
	display(v1);
	//to insert the element in another index, increment iter
	v1.insert(iter+2,999); 
	display(v1);

	//to insert the number multiple times
	v1.insert(iter,3,999);  //inserts 999 thrice
	display(v1);
}