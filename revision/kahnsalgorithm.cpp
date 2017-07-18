#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>nodes[100005];
bool visited[100005];

void topologicalsort(){
  vector<int> toporder;
  int indegree[n];
  memset(indegree,0,sizeof(indegree));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<nodes[i].size();j++)
    {
      indegree[nodes[i][j]]++;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<indegree[i]<<endl;
  }
  int cnt=0;
  queue<int>q;
  for(int i=0;i<n;i++){
    if(!indegree[i])
      {q.push(i);}
  }
  while(!q.empty())
  {
    int v = q.front();
    q.pop();

    toporder.push_back(v);
    for(int i=0;i<nodes[v].size();i++)
    {
      indegree[nodes[v][i]]--;
      if(!indegree[nodes[v][i]])
        q.push(nodes[v][i]);
    }
    cnt++;
  }
  if(cnt!=n)
  {
    cout<<cnt<<endl;
    cout<<"Cyclic Graph Detected."<<endl;
    return ;
  }
  for(int i=0;i<toporder.size();i++)
  {
    cout<<toporder[i]<<"  ";
  }
  return ;
}

int main()
{


  // #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
  }
  topologicalsort();
  return 0;
}
