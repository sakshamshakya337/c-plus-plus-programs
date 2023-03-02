//write a program to read age of candidate is eligible for voting or not.
#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter the age of candidate:";
  cin>>age;
  if(age>=18)
  {
    cout<<"Candidate is eligible for voting";
  }
  else
  {
    cout<<"Candidate is not eligible for voting";
  }
  return 0;
}