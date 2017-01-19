#include<bits/stdc++.h>
using namespace std;
void computeLps(string pat, long long m, long long int lps[])
{
  long long int len =0;
  lps[len] =0;
  long long int i=1;
  while(i<m)
  {
    if(pat[i]==pat[len])
    {
      len++;
      lps[i] = len;
      i++;
    }
    else
    {
        if(len!=0)
        {
          len = lps[len-1];
        }
        else
        {
          lps[i] = 0;
          i++;
        }
    }
  }
}
void Kmpsearch(string pat, string txt)
{
  long long m = pat.length();
  long long n = txt.length();
  if(m>n)
  {
    cout<<"Not Found"<<endl;
    return;
  }
  long long int lps[m];
  computeLps(pat,m,lps);
  long long int i=0,j=0;
  long long count =0;
  vector<long long int>v;
  while(i<n)
  {
    if(txt[i]==pat[j])
    {
      i++;
      j++;
    }
    if(j==m)
    {
      v.push_back(i-j);
      count++;
      j = lps[j-1];
    }
    else if(i<n&&pat[j]!=txt[i])
    {
      if(j)
      {
        j = lps[j-1];
      }
      else{

        i++;
      }
    }
  }
  if(count){
    cout<<count<<endl;
  for(long long int i=0;i<v.size();i++){
    cout<<v[i]+1<<" ";
  }
  //cout<<count<<endl;
}
else{
  cout<<"Not Found"<<endl;
}
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string pat,txt;
    cin>>txt;
    cin>>pat;
    Kmpsearch(pat,txt);
  }
}
