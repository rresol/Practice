#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  vector<int> c;
  vector<int> d;
  for(int i=0;i<n;i++)
  {
    d.push_back(b[i]-'0');
    c.push_back(b[i]-'0');
  }
  sort(d.begin(),d.end());
  sort(c.begin(),c.end());
  int ans1 =0;
  int ans2 =0;
  vector<int>::iterator low,up;
  for(int i=0;i<n;i++)
  {
    low = lower_bound(d.begin(),d.end(),a[i]-'0');
    up = upper_bound(c.begin(),c.end(),a[i]-'0');
    if(low!=d.end())
    {
      ans1++;
      d.erase(low);
    }
    if(up!=c.end())
    {
      ans2++;
      c.erase(up);
    }
  }
  cout<<n-ans1<<endl;
  cout<<ans2<<endl;
}
