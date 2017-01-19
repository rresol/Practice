#include<iostream>
using namespace std;

unsigned int nextPowerOfTwo(unsigned int x)
{
  unsigned int a=1;
  int flag =0;
  while(x)
  {
    a = a<<1;

    if(x&1 &&(x!=1))
    {
      flag =1;
    }
    x=x>>1;
  }
  if(flag)
  {
    return a;
  }
  else
  {
    return a>>1;
  }

}

int main()
{
  unsigned int a;
  cin>>a;
  unsigned int result = nextPowerOfTwo(a);
  cout<<result<<endl;
}
