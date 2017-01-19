#include<iostream>
using namespace std;
int checkPower(int x)
{
  long int m =1;
  int t =16;
  while(t--)
  {


    if(x==m)
    {
      return 1;
    }
m = m<<2;
  }
  return 0;
}

int main()
{
  long a ;
  cin>>a;
  cout<<checkPower(a);
}
