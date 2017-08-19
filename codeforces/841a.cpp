#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  map<char,int>m;
    for(int i=0;i<s.size();i++)
  {
    m[s[i]]++;
    if(m[s[i]]>k)
    {
      cout<<"NO"<<endl;
      return 1;
    }
    //s1.insert(s[i]);
  }
 cout<<"YES"<<endl;
 return 0;
}
