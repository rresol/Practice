#include<bits/stdc++.h>
using namespace std;
char a[10005][10005];
bool visited[10005][10005];
bool isSafe(int n, int m, int row, int col)
{
  return (row >= 0) && (row < n) &&
           (col >= 0) && (col < m) &&
           ((a[row][col]=='X') && !visited[row][col]);
}
int dfs(int n, int m, int row, int col){

  int rowx[] = {0,0,1,-1};
  int coly[] = {1,-1,0,0};
  for(int i=0;i<4;i++)
  {
    if(isSafe(n,m,row+rowx[i],col+coly[i])){
      visited[row+rowx[i]][col+coly[i]] = true;
      dfs(n,m,row+rowx[i],col+coly[i]);
    }
  }

}

int main()
{
  int count =0;
  int n,m;
  cin>>n>>m;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      visited[i][j] = false;
    }
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i][j]=='X' && !visited[i][j])
      {
        dfs(n,m,i,j);
        count++;
      }
    }
  }
  cout<<count<<endl;
}
