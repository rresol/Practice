#include<iostream>
#define INT_BITS 32
using namespace std;
int leftRotate(int n, unsigned int d)
{
  return (n<<d)|(n>>(INT_BITS-d));
}
int rightRotate(int n, unsigned int d)
{
  return (n>>d) | (n<<(INT_BITS-d));
}

int main()
{
  int x,d;
  cin>>x>>d;
  cout<<leftRotate(x,d)<<endl;
  cout<<rightRotate(x,d)<<endl;
  return 0;
}
