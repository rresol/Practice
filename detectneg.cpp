#include<iostream>
using namespace std;
int main()
{
  int a;
  int b;
  cin>>a>>b;
  int res = a & (~b);
  if(res)
  {
    cout<<"No"<<endl;
  }
  else
  {
    cout<<"Yes"<<endl;
  }
  return 0;
}
