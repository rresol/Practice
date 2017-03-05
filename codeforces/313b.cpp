#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  int a[s.size()];
  int cou =0;
  a[0] = 0;
  for(int i=1;i<s.size();i++)
  {
    if(s[i]==s[i-1])
      cou++;
    a[i] = cou;
  }
  int m;
  cin>>m;
  while(m--)
  {
    int l,r;
    cin>>l>>r;
    cout<<a[r-1]-a[l-1]<<endl;
  }
  return 0;
}
