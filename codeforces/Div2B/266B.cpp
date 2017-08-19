#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int t;
  cin>>n>>t;
  string s;
  cin>>s;
  string aux=s;
  while(t--){
  for(int i=0;i<s.size()-1;i++)
  {
      if(s[i]=='B' && s[i+1]=='G')
      {
        s[i]='G';
        s[i+1]='B';
        i++;
      }
  }
}
cout<<s<<endl;
}
