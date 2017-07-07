#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n;
  cin>>t;
  while(t--){
  cin>>n;
  long long int sum=0;
  for(int i=0;i<n;i++)
  {
    long long x;
    cin>>x;
    sum+=x;
  }
  if(sum%2!=0)
  {
    cout<<"No"<<endl;

  }
  else
  {cout<<"Yes"<<endl;}}
  return 0;
}
