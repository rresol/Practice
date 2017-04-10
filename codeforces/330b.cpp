#include<bits/stdc++.h>
using namespace std;

int n,m;
int d[1004];
int main()
{
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int x,y;
    cin>>x>>y;
    d[x] = 1;
    d[y] = 1;
  }
  int temp;
  for(int i=1;i<=n;i++)
  {
    if(!d[i])
    {
      temp = i;
      break;
    }
  }
  cout<<n-1<<endl;
  for(int i=1;i<=n;i++)
  {
    if(i!=temp)
      cout<<temp<<" "<<i<<endl;
  }
  return 0;

}
