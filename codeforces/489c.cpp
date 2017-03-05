#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,s;
  cin>>m>>s;
  if(s==0)
  {
    if(m==1)
    {
      cout<<0<<" "<<0<<endl;
    }
    else
    {
      cout<<-1<<" "<<-1<<endl;
    }
    return 0;
  }
  if(s>(9*m))
  {
    cout<<-1<<" "<<-1<<endl;
  }
  else
  {int mi[m];
  int ma[m];
  int t  = s;
  mi[0] =1 ;
  ma[m-1] = 1;
  s = s-1;
  t = t-1;


  for(int i=m-1;i>0;i--)
  {
    if(s>=9)
    {
      mi[i] = 9;
      s-=9;
    }
    else
    {
      mi[i] = s;
      s =0;
    }
  }
  if(s)
  {
    mi[0]+=s;
  }
  for(int i=0;i<m-1;i++)
  {
    if(t>=9)
    {
      ma[i] = 9;
      t-=9;
    }
    else
    {
      ma[i] = t;
      t =0;
    }
  }
  if(t)
  {
    ma[m-1]+=t;
  }
  for(int i=0;i<m;i++)
  {
    cout<<mi[i];
  }
  cout<<" ";
  for(int i=0;i<m;i++)
  {
    cout<<ma[i];
  }
  cout<<endl;}
}
