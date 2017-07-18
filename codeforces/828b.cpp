#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  string matrix[n];
  for(int i=0;i<n;i++)
  {
    cin>>matrix[i];
  }
  int min_row = n+1;
  int min_col = m+1;
  int max_row = -1;
  int max_col = -1;
  int cou = 0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(matrix[i][j]=='B')
      {
        cou++;
        min_row = min(min_row,i);
        min_col = min(min_col,j);

        max_row = max(max_row,i);
        max_col = max(max_col,j);
      }
    }
  }
  int side = max(max_row-min_row+1, max_col-min_col+1);
  if(cou==0)
  {
    cout<<1<<endl;
  }
  else if(cou==1)
  {
    cout<<0<<endl;
  }
  else{
    if(side<=m && side<=n)
    {
      int ans = (side*side)-cou;
      cout<<ans<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  return 0;

}
