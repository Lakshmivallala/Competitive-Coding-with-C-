#include<bits/stdc++.h>

using namespace std;

//Time complexity: O(n)
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
        vector<int> ans;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==i+1)
	        ans.push_back(arr[i]);
	    }
	    return ans;
	}
	
};


int main() {

        int n, i;
        cout<<"Enter n"<<endl;
        cin >> n;
        int arr[n];
        cout<<"Enter elements"<<endl;
        for (i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n); //auto
        //automatically deduct data type from initialiser
        if (ans.empty()) 
        {
            cout << "Not Found";
        } 
        else 
        {
            for (int x: ans) //iterate over ans
            {
                cout << x << " ";
            }
        }
        cout << "\n";
    
    return 0;
}
