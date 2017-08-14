#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string ans="";
  for(int i=0;i<s.size();i++)
  {
    if(isalnum(s[i]))
    {
      ans.push_back(s[i]);
    }
  }
  sort(ans.begin(),ans.end());
  cout<<ans[0];
  for(int i=1;i<ans.size();i++)
  {
    cout<<'+'<<ans[i];
  }
  return 0;
}
