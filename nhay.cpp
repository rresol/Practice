#include<bits/stdc++.h>
using namespace std;

void computeLps(string needle, int m, int lps[] )
{
  long long int len =0;
  long long int i=1;
  lps[len] =0;
  while(i<m)
  {
    if(needle[i]==needle[len])
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
        lps[i] =0;
        i = i+1;
        //len =0;
      }
    }
  }
}

void Kmpsearch(string needle,string haystack, int len)
{
  int haystack_len = haystack.length();
  if(haystack_len<len){
    cout<<endl;
    return;
  }
  int lps[len] ;
  computeLps(needle,len,lps);
  int i =0,j=0;
  while(i<haystack_len)
  {
    if(haystack[i]==needle[j])
    {
      i++;j++;
    }
    if(j==len)
    {
      cout<<i-j<<endl;
      j = lps[j-1];
    }
    else if(i<haystack_len && haystack[i]!=needle[j]){
      if(j!=0)

      {
        j = lps[j-1];

      }
      else{
            //j=0;
            i++;
      }

    }
  }
  cout<<endl;
}

int main()
{
  int t;
  cin>>t;
  string needle,haystack;
  cin>>needle;
  cin>>haystack;
  Kmpsearch(needle,haystack,t);
}
