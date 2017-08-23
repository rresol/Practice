#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  map<string,string>fi;
  map<string,string>sec;
  for(int i=0;i<m;i++)
  {
    string s1,s2;
    cin>>s1>>s2;
    fi[s1] = s2;
    sec[s2] = s1;
  }
  string ans="";
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    string second = fi[s];
    string first =  sec[second];
    if(first.size()==second.size())
      ans+=first;
    else if(first.size()<second.size()) ans+=(first);
    else ans+=(second);
    ans+=" ";
  }

  ans.pop_back();
  cout<<ans<<endl;
}
