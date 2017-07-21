#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >nodes[10005];
bool visited[100005];
int path[100005];

int main()
{
  int n,r;
  cin>>n>>r;

  for(int i=0;i<r;i++)
  {
    int x,y,w;
    cin>>x>>y>>w;
    nodes[x].push_back(make_pair(y,w));
    nodes[y].push_back(make_pair(x,w));
  }

}
