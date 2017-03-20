#include<bits/stdc++.h>
using namespace std;

int a[25][25];
int n,m;
string s1;
string s2;

int cou;
void dfs(int x, int y)
{
  if(a[x][y]) return;
  if(x>(n-1) || x<0 || y<0 || y>(m-1))
  {
    return ;
  }
  if(cou)
  {
    a[x][y] = 1;
  }
  cou++;

  if(s1[x] == '<')
    dfs(x, y-1);
else dfs(x, y+1);

if(s2[y] == 'v')
    dfs(x+1, y);
else dfs(x-1, y);

  return;
}

int main()
{
  cin>>n>>m;
  cin>>s1>>s2;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cou=0;
      if(!a[i][j])
        dfs(i,j);
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      //cout<<a[i][j]<<" ";
      if(!a[i][j]){
        //cout<<i<<" "<<j<<endl;
        cout<<"No\n";
        return 0;
    }
    }
  }
  cout<<"Yes\n";
return 0;
}
