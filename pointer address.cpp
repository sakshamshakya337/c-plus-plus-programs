//write a program to store the address of a variable in the pointer variable print the address of variable and value of variable using pointer variable.
#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int *p;
  p=&a;
  cout<<"Address of a is:"<<p<<endl;
  cout<<"Value of a is:"<<*p<<endl;
  return 0;
}