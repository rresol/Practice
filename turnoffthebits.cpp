#include<iostream>
using namespace std;
int turnOffTheBits(int x)
{
  int m =1;
  int b = ~m;
  while(b&m)
  {
    m<<=1;
  }
  x = x^m;
  return x;
}

int main()
{
  int x;
  cin>>x;
  cout<<turnOffTheBits(x);
}
