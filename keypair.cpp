#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    //vector<int>::iterator i;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      cout<<a[i];
    }


  }
}
