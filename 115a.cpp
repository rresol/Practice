#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>nodes[2005];
bool visited[2004];
int level[2004];
int bfs(int src){
  queue<int>q;
  q.push(src);
  level[src]=0;
  int ans =0;
  //cout<<1<<endl;
  //cout<<"--------"<<endl;
  while(!q.empty()){
    int v = q.front();
    //cout<<v<<endl;
    q.pop();
    visited[v]=true;
    ans = max(ans,level[v]);
    for(int i=0;i<nodes[v].size();i++){
      if(!visited[nodes[v][i]]){
        level[nodes[v][i]] = level[v]+1;
        q.push(nodes[v][i]);
        visited[nodes[v][i]]=true;
      }
    }
  }
  return ans;
}
int main(){

  cin>>n;
  vector<int>parent;
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    if(x==-1)parent.push_back(i);
    else{
      nodes[x].push_back(i);
    }
  }
  int ans = 0;
  for(int i=0;i<parent.size();i++){
    int h = bfs(parent[i]);
    ans = max(ans,h);
  }
  cout<<(ans+1)<<endl;

}
