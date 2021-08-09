#include<iostream>

using namespace std;

// Before swapping: a=1 b=2
// Inside the function: x=2 y=1
// After swapping: a=1 b=2
// We observe that there is no swapping operation that has been performed on these two variables. CALL BY VALUE -> Value is not modified.

void swapx(int x, int y);

int main()
{
    int a = 1, b = 2;

    printf("Before swapping: a=%d b=%d\n", a, b);
    // Pass by Values
    swapx(a, b);

    printf("After swapping: a=%d b=%d\n", a, b);
    printf("We observe that there is no swapping operation that has been performed on these two variables. CALL BY VALUE -> Value is not modified.");
    return 0;
}

void swapx(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("Inside the function: x=%d y=%d\n", x, y);
}
