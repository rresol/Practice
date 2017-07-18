#include<bits/stdc++.h>
using namespace std;
int startime[100005];
int endtime[100005];
int main()
{
  int n;
  cin>>n;
  vector<int> nodes[n+1];
  for(int i=0;i<n-1;i++)
  {
    int a,b;
    cin>>a>>b;
    nodes[a].push_back(b);
    nodes[b].push_back(a);
  }
  stack<int>s;
  s.push(1);
  bool visited[n+1];
  memset(visited, false, n+1);
  int time =0;
  while(!s.empty())
  {
    int v = s.top();
    s.pop();
    
  }
  return 0;
}
