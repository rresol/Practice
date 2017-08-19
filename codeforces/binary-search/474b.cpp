#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
  int n;
  cin>>n;
  int start=1;
  int j;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    
    for(j=start;j<(x+start);j++)
    {
      a[j]=i+1;
    }
    start = x+start;
  }

  int k;
  cin>>k;
  while(k--)
  {
    int v;
    cin>>v;
    cout<<a[v]<<endl;
  }
  return 0;
}
