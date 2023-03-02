//write a program to print even numbers from n1 to n2 and add the output and print the sum(get values from user).
#include<iostream>
using namespace std;
int main()
{
  int i,n1,n2,add=0,mod,rem,temp,sum,sum1,sum2;
  cout<<"Enter the value of n1:";
  cin>>n1;
  cout<<"Enter the value of n2:";
  cin>>n2;
  for(i=n1;i<=n2;i++)
  {
    if(i%2==0)
    {
      cout<<i<<endl;
      add=add+i;
      temp=add;
    while(temp!=add)
      rem=temp%10;
      sum=temp/10;
      sum1=temp%10;
      sum2=rem+sum+sum1;
    }
  }
  cout<<"output of sum is:"<<add<<endl;
  cout<<"output of modulus is:"<<sum2;
  return 0;
}