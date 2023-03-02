//write a program to electricity bill a)for first 50 units- 0.50/unit b)for next 100 units - 0.75/units c)for next 100 units - 1.20/units d)for above 250 units - 1.50/units.
#include<iostream>
using namespace std;
int main()
{
  float units;
  cout<<"Enter the number of units consumed: ";
  cin>>units;
  if(units>=1 && units<=50)
  {
    cout<<"electricity bill is:"<<units*0.50;
  }
  else if(units<=51 && units>=150)
  {
    cout<<"electricity bill is:"<<units*0.75;
  }
  else if(units<=151 && units>=250)
  {
    cout<<"electricity bill is:"<<units*1.20;
  }
  else
  {
    cout<<"you have not used electricity bill";
  }
  return 0;
}