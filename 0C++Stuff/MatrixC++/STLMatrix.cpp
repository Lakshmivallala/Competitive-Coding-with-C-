#include<iostream>
#include <vector>

using namespace std;

//Matrix or vector of vector
int main()
{
	// vector<int> vect; for vector
	vector<vector<int>> vect{{1, 2, 3,5},{4, 5, 6,3},{7, 8, 9,4}};;
	cout<<"Vect size: "<<vect.size()<<endl;

	for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;    }

	return 0;
}
