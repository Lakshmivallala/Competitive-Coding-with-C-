#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//A D01 - Cut the Fruit

// The first (and the only) input line contains integer number w — the weight of the watermelon bought by them.
// Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

// Sample Input 0

// 8
// Sample Output 0

// YES
// Explanation 0

// The boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos)


int main() {
    int w;
    cin>>w;
    if(w%2==0 && w!=2) //if weight is divisible and not 2
    	//since dividing two into parts is 1 and 1 which are odd even
    	//though 2 is even
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
