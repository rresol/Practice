#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string ans="";
  for(int i=0;i<s.size();i++)
  {
    s[i]= tolower(s[i]);
    if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'||  s[i]=='u' || s[i]=='y')
      continue;

      cout<<"."<<s[i];
    //ans += "."+s[i];
  }
  cout<<ans<<endl;
}
