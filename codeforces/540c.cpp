#include<bits/stdc++.h>
using namespace std;
int graph[505][505];
int visited[505][505];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int n,m;

void dfs(int x, int y)
{
  if((x>n-1) || (y>m-1) || (x<0) || (y<0)) return;
  graph[x][y]--;
  if((graph[x][y]<=0)) return;
  visited[x][y] = 1;
  dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);

}

int main()
{
  cin>>n>>m;
  vector<vector<string> >a(n+5);
  for(int i=0;i<n;i++)
  {
    string b;
    cin>>b;
    for(int j=0;j<m;j++)
    {
      if(b[j]=='X')
      {
        graph[i][j] = 1;
      }
      else
      {
        graph[i][j] =2;
      }
    }
  }
  int r1,c1,r2,c2;
  cin>>r1>>c1>>r2>>c2;
  r1--,c1--,r2--,c2--;
  graph[r1][c1]++;
  dfs(r1,c1);
  if(graph[r2][c2]<=0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
