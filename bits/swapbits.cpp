#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x,y;
  cin>>x>>y;
  int k;
  cin>>k;
  int p1 = (n>>x)&((1U<<k)-1);
  int p2 = (n>>y)&((1U<<k)-1);
  int xor = p1^p2;
  xor = (xor<<x) | (xor<<y);
  unsigned int result = n^xor;
  cout<<result<<endl;
}
