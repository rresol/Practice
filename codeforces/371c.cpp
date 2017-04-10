#include<bits/stdc++.h>
#define ll long long
using namespace std;
int rec[3];
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='B') rec[0]++;
    if(s[i]=='S') rec[1]++;
    if(s[i]=='C') rec[2]++;

  }
  ll int cnt[3];
  ll int price[3];
  for(int i=0;i<3;i++)
  {
    cin>>cnt[i];
  }
  for(int i=0;i<3;i++)
  {
    cin>>price[i];
  }
  ll int total_cost=0 ;
  ll int R;
  cin>>R;
  for(int i=0;i<3;i++)
  {
    if(rec[i])
    {
      total_cost+=(cnt[i]*price[i]);
    }
  }
  total_cost+=R;
  ll int oneHam = price[0]*rec[0] + price[1]*rec[1] + price[2]*rec[2];
  cout<<total_cost/oneHam<<endl;
  return 0;
}
