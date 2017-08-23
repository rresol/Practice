#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--){
  int n,k,x,d;
  cin>>n>>k>>x>>d;

  double sum =0;
  for(int i=0;i<n;i++)
  {
    int v ;
     cin>>v;
    double profit = (x*v)/100.0;
    //sum+= max(k,profit);
    if(k>profit)
    {
      sum+=k;
    }
    else
    {
      sum+=profit;
    }
  }
  if(sum>d)
  {
    cout<<"upfront"<<endl;
  }
  else
  {
    cout<<"fee"<<endl;
  }}
  return 0;
}
