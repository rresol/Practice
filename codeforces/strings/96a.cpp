#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i=0;
  int cou =1;
  while(i<(s.size()-1))
  {
    if(s[i]==s[i+1])cou++;
    else cou=1;
    //cout<<"jfkdfs";
    if(cou==7)
    {
    cout<<"YES"<<endl;return 0;
  }
    i++;
  }
  cout<<"NO"<<endl;
  return 0;
}
