#include<iostream>

using namespace std;

//observe the change
void swapx(int *x, int * y);

int main()
{
    int a = 1, b = 2;

    printf("Before swapping: a=%d b=%d\n", a, b);
    // Pass by Reference
    swapx(&a, &b);

    printf("After swapping: a=%d b=%d\n", a, b);
    printf("We observe that swapping operation has been performed on these two variables. CALL BY REFERNCE -> Value is modified.");
    return 0;
}

void swapx(int *x, int *y) //observe the change
{
    int t;

    t = *x; //observe the change
    *x = *y;
    *y = t;

    printf("Inside the function: x=%d y=%d\n", *x, *y); //observe the change
}
