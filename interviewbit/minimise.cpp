#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,l;
  cin>>n>>m>>l;
  int a[n],b[m],c[l];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>b[i];
  }
  for(int i=0;i<l;i++)
  {
    cin>>c[i];
  }
  int i1,i2,i3;
  i1=0;
  i2=0;
  i3=0;
  int diff= INT_MAX;
  while(i1<n && i2<m && i3<l)
  {
    int ma = max(a[i1],max(b[i2],c[i3]));
    int mi = min(a[i1],min(b[i2],c[i3]));
    if(mi==a[i1])i1++;
    if(mi==b[i2])i2++;
    if(mi==c[i3])i3++;
    diff=min(diff,ma-mi);
  }
  cout<<diff<<endl;
}
