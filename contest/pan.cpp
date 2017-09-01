#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a[26];
    for(int i=0;i<26;i++)
    {
      cin>>a[i];
    }
    long long ans =0;
    string s;
    cin>>s;
    map<int,int>m;
    for(int i=0;i<s.size();i++)
    {

      m[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
      if(!m[i])
      {
        ans+=a[i];
      }
    }
    cout<<ans<<endl;
  }
}
