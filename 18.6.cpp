#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int dx[] = {0,0,1,-1,1,-1};
  int dy[] = {1,-1,0,0,1,-1};
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;j++)
      {
        cin>>a[i][j];
      }
    }
    int ans = INT_MIN;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;j++)
      {
        int cou =0;
        if(a[i][j])
        {
           queue<pair<int,int> > q;
           q.push_back(make_pair(i,j));
           a[i][j] = 0;

           while(!q.empty())
           {
             int x = q.front().first;
             int y = q.front().second;
             q.pop();
             for(int i=0;i<6;i++)
             {
               if(!(x+dx[i]<1 || x+dx[i]>n || y+dy[i] <1 || y+dy[i] >n ))
               {
                 if(a[x+dx[i]][y+dy[i]])
                 {
                   a[x+dx[i]][y+dy[i]]  = 0;
                   q.push(make_pair(x+dx[i],y+dy[i]));
                   cou++;
                 }

               }
             }

           }
        }
        ans = max(ans,cou);
      }
    }
    cout<<ans<<endl;
  }
}
