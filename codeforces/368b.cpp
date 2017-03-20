#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int c[100005];
int main()
{
  int n,m;
  cin>>n>>m;
  int cou  =0;
  for(int i=0;i<n;i++)
  {
    cin>>c[i];
  }
  for(int i=n-1;i>-1;i--)
  {
    if(!a[c[i]])
    {
      a[c[i]]++;
      cou++;
    }
    b[i] = cou;
  }
  while(m--)
  {
    int l;
    cin>>l;
    cout<<b[l-1]<<endl;
  }
}
