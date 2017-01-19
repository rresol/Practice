#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int flag = 0;
    int b[2]={0};
    while(n--)
    {
      string a;
      cin>>a;

    if(a.find("man")!=a.end())
    {
      b[0]++;
      cout<<b[0]<<endl;
    }
    else
    {
      b[1]++;
      cout<<b[1]<<endl;
    }
    if(b[0]-b[1]>=2)
    {
      flag = 1;
    }
    if(b[1]-b[0]>=3)
    {
      if(flag!=1)
        flag = 2;
    }
    }
    if(flag==1){
      cout<<"superheroes"<<endl;}
    else if(flag==2){
      cout<<"villains"<<endl;}
    else{
      cout<<"draw"<<endl;}
  }
}
