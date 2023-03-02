//write a program to print sum of first natural numbers.
#include <iostream>
using namespace std;
int main()
{
  int i,n,sum=0;
  cout<<"Enter a number:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;
  return 0;
}