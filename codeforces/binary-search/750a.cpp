#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int rem = 240-k;

  if(rem==0)
  {
    cout<<0<<endl;
    return 0;
  }
  vector<int>sum(n);
  sum[0] =5;
  for(int i=1;i<n;i++)
  {
    sum[i] = ((i+1)*5)+sum[i-1];
  }
  int hi = n-1;
  int lo =0;
  while(lo<hi)
  {
    int mid = lo + (hi-lo+1)/2;
    if(sum[mid]>rem)
    {
      hi = mid-1;
    }
    else
    {
      lo = mid;
    }
  }
  if(a[lo]>rem)
  {
    cout<<0<<endl;
    return 0;
  }
  cout<<lo+1<<endl;

}
