#include<vector>
#include<queue>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
  int n,m,q;
  scanf("%d%d%d",&n,&m,&q);
  int matrix[n+1][m+1];
  int tot=0;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++){

      scanf("%d",&matrix[i][j]);
      if(matrix[i][j])
      {
        tot++;
      }
    }
  }
  int dx[] = {0,0,-1,1};
  int dy[] = {1,-1,0,0};

  while(q--)
  {
      int x,y;

      scanf("%d%d",&x,&y);
      queue< pair<int,int> >q;
      if(matrix[x][y]){

      q.push(make_pair(x,y));
      matrix[x][y] = 0;
      tot--;
      while(!q.empty())
      {
          int x1 = q.front().first;
          int y1 = q.front().second;

          q.pop();
          for(int i=0;i<4;i++)
          {
              if(!(x1+dx[i]<1 || x1+dx[i]>n || y1+dy[i]<1 ||y1+dy[i]>m ))
              {
                if(matrix[x1+dx[i]][y1+dy[i]])
                {
                  tot--;
                  q.push(make_pair((x1+dx[i]),(y1+dy[i])));
                  matrix[x1+dx[i]][y1+dy[i]] = 0;
                }
              }
          }
      }
    }
    printf("%d\n",tot);
  }
}
