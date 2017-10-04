#include<bits/stdc++.h>
using namespace std;


typedef pair<long long int, long long int> PII;
#define llmax LONG_LONG_MAX
#define mp make_pair

bool visited[20005];
vector< PII >nodes[20005];
long long lastadded[20005];
long long dist[20005];
int n,m;
long long mstcost =0;

void mst(int src){
  priority_queue<PII, vector<PII>, greater<PII> >pq;
  pq.push(mp(0,src));
  while(!pq.empty()){
    long long v = pq.top().second;
    long long weight = pq.top().first;
    pq.pop();
    if(visited[v]){
      continue;
    }
    mstcost+=weight;
    visited[v]=true;
    for(int i=0;i<nodes[src].size();i++){
      long long x = nodes[src][i].second;
      long long weight = nodes[src][i].first;
      if(!visited[x])
        pq.push(mp(weight,x));
    }
  }
}

void dijkstra(){
  priority_queue<PII, vector<PII>, greater<PII> >pq;
  pq.push(mp(0,0));
  dist[0]=0;
  while(!pq.empty()){
    long long u = pq.top().second;
    long long d = pq.top().first;
    pq.pop();
    if(d>dist[u])continue;
    for(int i=0;i<nodes[u].size();i++){
      int v = nodes[u][i].first;
      int weight = nodes[u][i].second;
      if(dist[v]>(dist[u]+weight)){
        dist[v] = weight+d;
        pq.push(mp(dist[v],v));
        lastadded[v]=weight;

      }
      else if(dist[v]==dist[u]+weight && lastadded[v]>weight){
        lastadded[v]=weight;
      }
    }
  }
  long long path=0;
  lastadded[0]=0;
  for(int i=0;i<n;i++){
    if(dist[i]==llmax){
      //cout<<i<<" "<<lastadded<<endl;
      cout<<"NO"<<endl;
      return;
    }
    else{
      path+=lastadded[i];
    }
  }
  //cout<<path<<endl;
  //cout<<mstcost<<endl;
  if(path==mstcost)cout<<"YES"<<endl;
  else{
    cout<<"NO"<<endl;
  }
}

int main(){

  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;

  for(int i=0;i<m;i++){
    long long x,y,w;
    cin>>x>>y>>w;
    nodes[x].push_back(mp(y,w));
    nodes[y].push_back(mp(x,w));
  }

  memset(visited,false, sizeof(visited));
  mst(0);


  memset(visited,false, sizeof(visited));
  //memset(lastadded, llmax, sizeof(lastadded));
  for(int i=0;i<n;i++){
    lastadded[i]=llmax;
    dist[i]=llmax;
  }
  dijkstra();
  //cout<<"step 3 clear"<<endl;

}
return 0;
}
