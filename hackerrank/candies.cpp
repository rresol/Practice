#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>cou(n,1);
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<a.size()-1;i++)
  {
    cout<<a[i]<<endl;
    //cout<<cou[i]<<" ";
    if(a[i]>a[i+1])
    {
      if(cou[i]<=cou[i+1]){
      cou[i] = cou[i+1]+1;}
    }
    else if(a[i]<a[i+1])
    {
      if(cou[i+1]<=cou[i]){
      cou[i+1] = cou[i]+1;}
    }
  }
  for(int i=a.size()-1;i>0;i--)
  {
    if(a[i]>a[i-1])
    {
      if(cou[i]<=cou[i-1]){
      cou[i] = cou[i-1]+1;}
    }
    else if(a[i]<a[i-1])
    {
      if(cou[i-1]<=cou[i]){
      cou[i-1] = cou[i]+1;}
    }
  }
  long ans = accumulate(cou.begin(),cou.end(),0);
  cout<<ans<<endl;
  return 0;
}
