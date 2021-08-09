  #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// 0x7ffde342f0d0
// 0x7ffde342f0d0
// 0x7ffde342f0d0
// 30
// 30
// 0x7ffde342f0d8 //observe 0+4+4 = 8 (so 4 bytes)
// 30
// Using pointers:
// 0x7ffde342f0d0
// 0x7ffde342f0c8
// 0x7ffde342f0d0
// 30
// 30
// 0x7ffde342f0d8
// 30

//When I ran the code the next time:
//observe that the locations of the variables are brand new
// 0x7ffd47e13120
// 0x7ffd47e13120
// 0x7ffd47e13120
// 30
// 30
// 0x7ffd47e13128           
// 30
// Using pointers:
// 0x7ffd47e13120
// 0x7ffd47e13120
// 30
// 30
// 0x7ffd47e13128
// 30


int main()
{
  //location:l1,l2,l3,l4,l5
  int a[5]={10,20,30,40,2};
  int *p=a; 
  cout<<a<<endl; //address of a: l1
  cout<<&a<<endl; //address of a: l1
  cout<<&a[0]<<endl; //address of a: l1
  cout<<a[2]<<endl;  //30
  cout<<2[a]<<endl;  //30, 2[a] same as a[2]
  cout<<a+2<<endl;  //l1+2*2 bytes->l1+4 = l3 ex: l1=100, 100+4=104, so l1=100, l2=102, l3=104 (considering only 2 bytes diff)
  cout<<*(a+2)<<endl;  //30

  //same syntax for pointers
  cout<<"Using pointers:"<<endl;
  cout<<p<<endl; //address of a: l1
  cout<<&p<<endl; //address of a: l1
  cout<<&a[0]<<endl; //address of a: l1
  cout<<p[2]<<endl;  //30
  cout<<2[p]<<endl;  //30, 2[a] same as a[2]
  cout<<p+2<<endl;  //l1+2*2 bytes->l1+4 = l3 ex: l1=100, 100+4=104, so l1=100, l2=102, l3=104 (considering only 2 bytes diff)
  cout<<*(p+2)<<endl;  //30

  return 0;
}