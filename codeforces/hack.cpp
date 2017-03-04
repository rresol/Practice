#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int i =0;
  while(t--)
  {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    long long max_n[n];
    max_n[0] = a[0];
    max_n[1]= max(a[0],a[1]);
    //cout<<max[1]<<endl;
    for(int i=2;i<n;i++)
    {
      max_n[i] = max(max_n[i-1],max_n[i-2]+a[i]);
    }
    cout<<"Case "<<i<<": "<<max_n[n-1]<<endl;
  }
}
