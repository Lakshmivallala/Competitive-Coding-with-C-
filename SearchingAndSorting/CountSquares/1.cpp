#include <bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/count-squares3649/1#


class Solution {
  public:
    int countSquares(int N) {
        int c=0;
        for(int i=1;i*i<N;i++)
        {
            if((i*i)<N)
            c++;
        }
        return c;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}