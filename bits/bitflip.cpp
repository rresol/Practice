#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int a,b;
  cin>>a>>b;
  a = a ^ b;
  int cou=0;
  while(a)
  {
    if(a&1)
    {
      cou++;
    }
    a>>=1;
  }
  cout<<cou<<endl;
}
}
