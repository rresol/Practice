#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int red=0, yellow=0, green=0;
    long long ma = 0;
    long long temp_red, temp_yellow, temp_green,m;
    for(int i=0;i<3;i++)
    {

      cin>>temp_red;
      red+=temp_red;
      cin>>temp_yellow;
      yellow+= temp_yellow;
      cin>>temp_green;
      green += temp_green;
      if(i==0)
      {
        m = temp_green + temp_red + temp_yellow;
      }
      if(i==1)
      {
          m = temp_green + temp_red + temp_yellow;
      }
      if(i==2)
      {
        m = temp_green + temp_red + temp_yellow;
      }
      ma = max(ma,m);
      //cout<<ma;
    }
    long long max_color = max(max(red,green),yellow);
    //c/out<<max_color;
    //cout<<red<<green<<yellow<<endl;
    ma = max(max_color,ma);
    //cout<<ma;
    if(!(ma%2)&& ma)
    {
      cout<<(ma-1)<<endl;
    }
    else
    {
      cout<<ma<<endl;
    }
  }
  return 0;
}
