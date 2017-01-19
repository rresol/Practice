#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void computeLps(string pat,long long int lps[])
{
  long long int m = pat.length();
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
        lps[i] =0;
        i++;
      }
    }
  }
}

void Kmpsearch(string pat, string text)
{
  long long int m = pat.length();
  long long int n = text.length();
  long long int lps[m];
  computeLps(pat,lps);
  long long int i=0;
  long long int j=0;
  while(i<n)
  {
    if(text[i]==pat[j])
    {
      i++;
      j++;
    }
    if(j==pat.length())
    {
      cout<<"YES\n";
      return;
    }
    else if(i<n && ( pat[j]!=text[i]) )
    {
      if(j!=0)
      {
        j = lps[j-1];
      }
      else{
        i++;
      }
    }
  }
  cout<<"NO\n"<<endl;
}

int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    long long int first;
    long long int second;
    cin>>first;
    second = first;
    string s="";
    long long int i=0;
    n--;
    while(n--)
    {
      cin>>first;
      if(first>second)
      {
        s+='G';
      }
      else if (first<second)
      {
        s+='L';
      }
      else
      {
        s+='E';
      }
      //cout<<s[i]<<endl;
      i++;
      second  = first;
    }
    string pat;
    cin>>pat;
    Kmpsearch(pat,s);
  }
}
