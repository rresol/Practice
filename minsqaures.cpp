#include<iostream>
#include<cmath>
using namespace std;

int perfecSq(int n)
{
  int root(round(sqrt(n)));
    return n == root * root;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int index;
  int ans[n+1];
   ans[0] =1;
  for(int i=1;i<=n;i++)
  {
    if(perfecSq(i))
    {
      ans[i] =1;
      index = i;
    }
    else
    {
      ans[i] = ans[index] + ans[i-index];
    }
  }
  cout<<ans[n]<<endl;
}}
