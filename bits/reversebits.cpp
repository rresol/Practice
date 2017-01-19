#include<iostream>
using namespace std;
int main()
{
  unsigned int x;
  cin>>x;
  unsigned int a = 0;
  unsigned int cou = 0;
  while(x)
  {
    unsigned int r = 1&x;

    a = a | r;
    //cout<<r<< "  "<<a<<endl;
    a = a<<1;
    x = x>>1;
    cou++;
    //cout<<a<<endl;
  }
  a = a>>1;
  cout<<a<<endl;
}
