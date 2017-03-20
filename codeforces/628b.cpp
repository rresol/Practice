#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  string s;
  //scanf("%s\n",&s);
  cin>>s;
  reverse(s.begin(),s.end());
  long long cou = 0;
  for(int i=0;i<s.length()-1;i++)
  {
    if((s[i]-'0')%4==0)
    {
      cou++;
    }
    //cout<<cou<<endl;
    int a=0;
     a+=s[i]-'0';
     a+=((s[i+1]-'0')*10);
     //cout<<a<<endl;
    if((a)%4==0)
    {
      cou += (s.length()-(i+1));
    }
    //cout<<cou<<endl;
  }
  if(s[s.length()-1]%4==0)
  {
    cou++;
  }
  cout<<cou<<endl;
}
