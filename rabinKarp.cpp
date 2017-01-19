#include<iostream>
#include<cstdio>
using namespace std;
#define d 256

void search(string pat, string txt, long long int q)
{
  long long int m = pat.length();
  long long int n = txt.length();
  long long int i,j;
  long long int p = 0, t = 0, h =1;
  for(i=0;i<m-1;i++)
  {
    h = (h*d)%q;
  }
  for(i=0;i<m;i++)
  {
    p = (d*p + pat[i])%q;
    t = (d*t + txt[i])%q;
  }
  for(i=0;i<=n-m;i++)
  {
    if(p==t)
    {
      for(j=0;j<m;j++)
      {
        if(txt[i+j]!=pat[j])
        {
          break;
        }
      }
      if(j==m)
      {
        cout<<"Y"<<endl;
        return;
      }
    }
    if(i<n-m)
    {
      t = (d*(t-txt[i]*h) + txt[i+m])%q;
      if(t<0)
        t+=q;
    }
  }
  cout<<"N"<<endl;
  return;
}
int main()
{
    string text;
    long long int n;
    string pat;
    scanf("%s\n",&text);
    cin>>n;
    while(n--)
    {
      cin>>pat;
      search(pat,text,3);
    }

}
