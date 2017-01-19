#include<iostream>
using namespace std;


int xormethod(int x, int y)
{
  return (y^((x^y)& -(x<y)));
}

int main()
{
  int x,y;
  cin>>x>>y;
  cout<<xormethod(x,y);
}
