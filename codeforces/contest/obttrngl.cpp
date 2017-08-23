#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int k,temp_a,temp_b;
    cin>>k>>temp_a>>temp_b;
    int a = min(temp_a,temp_b);
    int b = max(temp_a,temp_b);
    int diff = (b-a);
    int diff1 = (k-b)+a;
    int res = min(diff,diff1);
    //cout<<res<<endl;
    //double angle = 360.0/k;
    //double subtended_angle = double(res)*angle;
    if((2*res)!=k)
    {
      cout<<res-1<<endl;
    }
    else
    {
      cout<<0<<endl;
    }
  }
  return 0;
}
