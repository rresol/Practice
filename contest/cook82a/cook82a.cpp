#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    int t;

    int real,barca, mala,eiber;
    for(int i=0;i<4;i++){
    cin>>s;
    cin>>t;
    if(s=="Barcelona")
    {
      barca = t;
    }
    if(s=="Malaga")
    {
      mala = t;
    }
    if(s=="RealMadrid")
    {
      real = t;
    }
    if(s=="Eibar")
    {
      eiber = t;
    }

  }
  if((real<mala )&&(barca>eiber))
  {
    cout<<"Barcelona"<<endl;
  }
  else
  {
    cout<<"RealMadrid"<<endl;
  }

  }
  return 0;
}
