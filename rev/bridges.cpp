#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>nodes[n+1];
  for(int i=0;i<n;i++)
  {
    int x,y;
    nodes[x].push_back(y);
    nodes[y].push_back(x);
  }

}
