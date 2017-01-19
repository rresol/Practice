#include<iostream>
using namespace std;

int multipByThree(int c)
{
  return ((c<<1) + c + (c>>1));
}


int main()
{
  int c;
  cin>>c;
  cout<<multipByThree(c);
}
