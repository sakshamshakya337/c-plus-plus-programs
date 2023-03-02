//write a program to print the sum of output and add again output.
include<iostream>
using namespace std;
int main()
{
  int i,n1,n2,sum=0,sum1,mod,rem,temp;
  cout<<"Enter the value of n1:";
  cin>>n1;
  cout<<"Enter the value of n2:";
  cin>>n2;
  for(i=n1;i<=n2;i++)
  {
    if(i%2==0)
    {
      cout<<i<<endl;
      sum=sum+i;
      temp=sum;
      rem=temp%10;
      mod=temp/10;
      sum1=mod+rem;
    }
  }
  cout<<"output of sum is:"<<sum<<endl ;
  cout<<"output of modulus is:"<<sum1;
  return 0;
}