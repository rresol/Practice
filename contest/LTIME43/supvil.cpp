#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    int a[2] = {0};
    int flag =0;
    cin>>n;
    while(n--){
    string b;
    cin>>b;
    if(b.substr(b.length()-3)=="man" && a.length()>=3)
    {
      a[0]++;
      cout<<a[0]<<endl;
    }
    else
    {
      a[1]++;
      cout<<a[1]<<endl;
    }
    if(a[0]-a[1]>=2)
      {
        flag =1;
      }
    if(a[1]-a[0]>=3)
      {
        if(!flag)
      {flag = 3;}
    }
  }
  if(flag==0)
  {
    cout<<"draw\n";
  }
  else if(flag==1)
  {
    cout<<"superheroes\n";
  }
  else
  {
    cout<<"villains\n";
  }

  }
}
