#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n+1][n+1];
    int dx = {0,0,-1,1};
    int dy = {1,-1,0,0};
    pair< int,int > src;
    pair<int, int > dest;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
      int k;
      cin>>k;
      if(k==1)
      {
        src = make_pair(i,j);
        a[i][j] = 1;
      }
      if(k==2)
      {
        dest = make_pair(i,j);
        a[i][j] = 1;
      }
      if(k==3)
      {
        a[i][j] = 1;
      }
      if(k==0)
      {
        a[i][j] = 0;
      }
      }
    }
    queue<pair<int,int> >q;
    q.push(src);
    int flag = 0;
    while(!q.empty())
    {
      int x = q.front().first;
      int y = q.front().second;
      for(int i=0;i<4;i++)
      {
        if(!(x+dx[i]<1 || x+dx[i]>n || y+dy[i] <1 || y+dy[i] >n ))
        {
          if(a[x+dx[i]][y+dy[i]])
          {
            a[x+dx[i]][y+dy[i]]  = 0;
            q.push(make_pair(x+dx[i],y+dy[i]));
          }
          if(x+dx[i]==dest.first && y+dy[i]==dest.second)
          {
            flag = 1;
          }
        }
      }
      if(flag) break;
    }
    cout<<flag<<endl;
  }
  return 0;
}
