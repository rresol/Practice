#include<bits/stdc++.h>
int a1[100000];
int b1[100000];
using namespace std;
int main()
{
  int n,l;
  cin>>n>>l;
  int a[n],b[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }
  int a1[n],b1[n];
  int ans=0;
  for(int i=1;i<n;i++)
  {
    a1[a[i]-a[i-1]]++ ;
    b1[b[i]-b[i-1]]++;

  }
  a1[(l-a[n-1])+a[0]]++ ;
  b1[(l-b[n-1])+b[0]]++ ;
  int flag =0;
  for(int i=0;i<100000;i++)
  {
    if(a1[i]!=b1[i])
    {
      flag =1;
      break;
    }
  }
  if(flag)
  {
    cout<<"NO"<<endl;
  }
  else
  {
    cout<<"YES"<<endl;
  }
  return 0;
}
