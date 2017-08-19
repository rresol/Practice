#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  cin>>n>>t;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int ans =0;
  int i=0;
  int j =0;
  int sum =0;
  while(i<n)
  {
    if(sum>t)
    {

      sum = sum-a[j];
      j++;
    }
    else{
      sum+=a[i];
    }
    if(sum<=t)
    {
      ans = max(ans,i-j+1);
      i++;
    }
  }
  cout<<ans<<endl;
}
