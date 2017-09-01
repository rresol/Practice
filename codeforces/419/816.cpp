#include<bits/stdc++.h>
using namespace std;
int a[505][505];
vector<string>ans;
int row_wise(int n, int m)
{

  for(int i=0;i<n;i++)
  {
    int k = INT_MAX;
    for(int j=0;j<m;j++)
    {
      k= min(k,a[i][j]);
    }
    //cout<<i<<" "<<m<<endl;
    if(k)
    {
      for(int j=0;j<m;j++)
      {
        a[i][j]-=k;
      }
      while(k--){
      string s = "row ";

      s.push_back(to_string(i+1));
      //s.push_back(char((i+1)+'0'));
      ans.push_back(s);}
    }
  }
}
int col_wise(int n, int m)
{
  for(int j=0;j<m;j++)
  {
    int k = INT_MAX;
    for(int i=0;i<n;i++)
    {
      //cout<<a[i][j]<<" ";
      k = min(k,a[i][j]);
    }
    //cout<<endl;
    if(k)
    {
      for(int i=0;i<n;i++)
      {
        a[i][j]-=k;
      }
      while(k--){
      string s = "col ";
      s.push_back(to_string(j+1));
      ans.push_back(s);}
    }
  }
}
int main()
{
  int n,m;
  cin>>n>>m;

  //int check[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
      //check[i][j] = a[i][j];
    }
  }
  if(n<=m)
  {
    row_wise(n,m);
    col_wise(n,m);
  }
  else{
    col_wise(n,m);
    row_wise(n,m);
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i][j]){
        cout<<-1<<endl;
        return 0;
      }
    }
  }
  cout<<ans.size()<<endl;
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}
