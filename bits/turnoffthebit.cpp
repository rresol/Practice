#include<iostream>
using namespace std;
int main()
{
  int t,x;
  cin>>t>>x;
  x = 1<<(x-1);
  if(t>=x){
  t = t^x;}
  cout<<t<<endl;
}
