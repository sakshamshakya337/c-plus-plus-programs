//Write a prgram to print numbers from 1 to 10 using for loop and skip 6.
#include <iostream>
using namespace std;
int main()
{
  int i;
  for(i=1;i<=10;i++)
    {
      if(i==6)
      {
        continue;
      }
        cout<<i<<endl;
    }
    return 0;
}