#include<iostream>
using namespace std;

int addOne(int n)
{
  int m =1;
  while(m&n)
  {
    n = n^m;
    m<<=1;
  }
  n = n^m;
  return n;
}
int main()
{
  int n;
  cin>>n;
  cout<<addOne(n)<<endl;
}
