#include<iostream>

using namespace std;

int main()
{
  
// 3
// This is the output: 
// a b 
// This is the output: a b 
// c d 
// This is the output: c d 
// We observe that we could only give 2 inputs (a b and c d) even though t=3
// This is because after entering 3, the compiler assumes that the new line
// is the new string that we wanted to inputs. So it takes the first input 
// to be \n, a b as the second and c d as the last. We use ignore() to 
// avoid this CHECK ignore()That'swhy

  return 0;
}