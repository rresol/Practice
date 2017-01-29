#include<iostream>
using namespace std;
int parent[50100];
//int child[50100];
int find(int x)
{
  return parent[x]=(parent[x]==x?x:find(parent[x]));
}
int union(int p, int q)
{
  parent[find(p)] = find(q);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    struct subset a[n+1];
    while(k--)
    {
      int d,x,y;
      cin>>d>>x>>y;
      if(x>n || y>n || (x==y))
      {
        cou++;
      }
      else if(d==1){
      if(parent[x] &&  parent[y])
      {
        if(pare)
      }
      else if()
      {
        subset[y].parent = max(y,subset[y].parent);
      }
      }
    }
  }
}
