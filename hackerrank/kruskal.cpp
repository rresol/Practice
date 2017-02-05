#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
vector< pair<int,int> >graph[5000];
int main()
{
  int n,m;
  cin>>n>>m;
  while(m--)
  {
    int x,y,r;
    cin>>x>>y>>r;
    graph[x].pb(mp(y,r));
    graph[y].pb(mp(x,r));
  }
}
