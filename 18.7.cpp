#include<bits/stdc++.h>
using namespace std;
int main()
{
  int dx[] = {-2,-2,2,2,1,-1,1,-1};
  int dy[] = {1,-1,1,-1,-2,-2,2,2};
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    int a[n+1][m+1]={1};
    int s1,s2,d1,d2;
    cin>>s1>>s2>>d1>>d2;
    queue<pair<int,int> >q;
    q.push(make_pair(s1,s2));
    int level[n+1][m+1]={-1};
    level[s1][s2] =1;
    while(!q.empty())
    {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      if(x==d1 && y==d2)
      {
        break;
      }
      for(int i=0;i<8;i++)
      {
        if(!(x+dx[i]<1 || x+dx[i]>n || y+dy[i]<1 || y+dy[i]>m ))
        {
          if(level[x+dx[i]][y+dy[i]]==-1)
          {
            level[x+dx[i]][y+dy[i]] = level[x][y] +1;
            q.push(make_pair(x+dx[i],y+dy[i]));
          }
        }
      }
    }
    cout<<level[d1][d2]<<endl;
  }
}
