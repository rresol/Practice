#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  string s1 = "";
  getline(cin,s);
  for(int i=0;i<s.size();i++)
  {
    if(isalnum(s[i]))
      {s1+=(s[i]);}
  }
  string s2 =s1;
  cout<<s1<<"  "<<s2<<endl;
  reverse(s1.begin(),s1.end());
  for(int i=0;i<s1.size();i++)
  {
    if(tolower(s1[i])!=tolower(s2[i]))
      {cout<<"No"<<endl;
      return 0;}
  }
  cout<<"YES"<<endl;
  return  0;

}
