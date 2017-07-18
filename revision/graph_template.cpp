#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>nodes[100005];
bool visited[100005];

int main()
{

  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
    nodes[y].push_back(x);
  }
}
