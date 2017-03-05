#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int a;
  int s =0;
  vector<int>b(n);
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(a)
    {
      s++;
      b[i] = -1;
    }
    else
    {
      b[i] = 1;
    }
  }
  int max_sum = b[0];
  int sum =b[0];
  for(int i=1;i<n;i++)
  {
    sum = max(b[i],sum+b[i]);
    //cout<<sum<<endl;
    max_sum = max(sum,max_sum);
    //cout<<max_sum<<endl;
  }
  cout<<s+max_sum<<endl;
}
