//write a program to create a table of number entered by user using for loop.
#include<iostream>
using namespace std;
int main()
{
  int i,n;
  cout<<"Enter a number:";
  cin>>n;
  for(i=1;i<=10;i++)
  {
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
  }
  return 0;
}
