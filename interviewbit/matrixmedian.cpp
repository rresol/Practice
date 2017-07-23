#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  int mi=a[0][0];
  int ma = a[0][0];
  for(int i=0;i<n;i++)
  {
    mi= min(mi,a[i][0]);
    ma = max(ma,a[i][m-1]);
  }
  int elements = (n*m)/2 +1;
  while(mi<ma)
  {
    int mid = mi + (ma-mi)/2;
    int cnt =0;
    for(int i=0;i<n;i++)
    {
      cnt+= upper_bound(&a[i][0],&a[i][m],mid) - &a[i][0];
    }
    if(cnt<elements)
      mi = mid+1;
    else
      ma = mid;
  }
  cout<<mi<<endl;
}
