#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  char a[32];
  int i =0;
  while(t)
  {
      if(t&1)
      {
        a[i] = '1';
      }
      else
      {
        a[i] ='0';
      }
      t>>=1;
    i++;
  }
  cout<<a<<endl;
}
