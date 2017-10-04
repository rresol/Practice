#include<bits/stdc++.h>
using namespace std;
int recur(int n, int a, int steps, int prev)
{
  if(steps>n)
    return 0;
  if(steps==n)return 1;
  int ans =0;
  for(int i=prev+a;i<=(n);i++)
  {
    ans+= recur(n,a,steps+i,i);
  }
  return ans;
}
int main()
{
  int n,a;
  cin>>n>>a;
  cout<<recur(n,a,0,1-a)<<endl;
}
