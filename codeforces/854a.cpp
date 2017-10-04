#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int num =0;
  int denom =0;
  if(n%2)
  {
    num = n/2;
    denom = n-num;
  }
  else{
    num = n/2;
    if(num%2)
    {

      num-=2;
    }
    else{
      num--;
    }
    denom= n-num;
  }
  cout<<num<<" "<<denom<<endl;
  return 0;
}
