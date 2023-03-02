//write a c++ program to print armstrong number.
#include<iostream>
using namespace std;
int main()
{
  int n1,n2,i,temp,rem,sum=0;
  cout<<"Enter the value of n1:";
  cin>>n1;
  cout<<"Enter the value of n2:";
  cin>>n2;
  for(i=n1;i<=n2;i++)
  {
    temp=i;
    while(temp!=0)
    {
      rem=temp%10;
      sum=sum+(rem*rem*rem);
      temp=temp/10;
    }
    if(sum==i)
    {
      cout<<i<<endl;
    }
    sum=0;
  }
  return 0;
}