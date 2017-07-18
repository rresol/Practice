#include<bits/stdc++.h>
using namespace std;
#define MAXN 5000005
char ans[MAXN];
int main()
{
  int n;
  cin>>n;
  string s;
  int k;
  int last =0;
  map<int,string> lex;
  for(int i=0;i<n;i++)
  {
    cin>>s;
    cin>>k;
    int index;
    int last_index =0;
    for(int i=0;i<k;i++)
    {
      cin>>index;
      if(lex.find(index)!=lex.end())
      {
        if(lex[index].length()<s.length())
        {
          lex[index] = s;
        }
      }
      else{
        lex[index]= s;
      }
      last_index = max(index+s.length(),last_index);
    }
  }
  for(int i=0;i<last_index;i++)
  {
    ans[i]='0';
  }
  map<int,string>::iterator it;
  for(it = lex.begin();it!=lex.end();it++)
  {
    int pos = it->first;
    string val = it->second;
    int i=0;
    for(int j=0;j<val.length();j++)
    {
      ans[pos+j]  = val[j];
    }
  }
  for(int i = 0;i<last_index;i++)
	{
		if(ans[i]=='0')
			ans[i] = 'a';
	}
  cout<<ans<<endl;
  return 0;
}
