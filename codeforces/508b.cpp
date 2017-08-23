#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n = s.size();
  int max_val = INT_MAX;
  int index ;
  for(int i=0;i<s.size()-1;i++)
  {
    int v = s[i]-'0';

    if(((v%2)==0) && (v<max_val) && ((s[n-1]-'0')>v))
    {

      max_val = v;

      index =i;
      break;
      //cout<<index<<" ";
      //cout<<max_val<<endl;
    }
  }
  if(max_val==INT_MAX)
  {
    //cout<<max_val<<endl;
    for(int i=n-2;i>=0;i--)
    {
      if(s[i]%2==0)
      {
        max_val = s[i]-'0';
        index = i;
        break;
      }
    }
    if(max_val==INT_MAX)
    {
      cout<<-1<<endl;
      return 0;
    }
  }

    //cout<<max_val<<endl;
    //cout<<index<<endl;
    swap(s[index],s[n-1]);
  cout<<s<<endl;
  return 0;
}
