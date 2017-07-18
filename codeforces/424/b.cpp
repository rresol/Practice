#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;
  string s3;

  cin>>s3;
  map<char,char> dict;
  for(int i=0;i<26;i++)
  {
    dict[s1[i]] = s2[i];
  }
  string ans="";
  for(int i=0;i<s3.length();i++)
  {
    if((s3[i]>='A' && s3[i]<='Z') || (s3[i]>='a' && s3[i]<='z') )
    {if(isupper(s3[i]))
    {
      char s = tolower(s3[i]);
      ans+= toupper(dict[s]);
    }
    else
    {
      ans+= dict[s3[i]];
    }}
    else{
      ans+= s3[i];
    }
  }
  cout<<ans<<endl;
  return 0;

}
