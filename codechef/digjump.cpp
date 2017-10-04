#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n = s.size();
  vector<int>nodes[100005];
  map<char,int>mp;
  for(int i=0;i<n-1;i++){
    //int v = s[i]-'0';

    nodes[i].push_back(i+1);
    nodes[i+1].push_back(i);
    if(mp.find(s[i])==mp.end()){
      mp[s[i]] = i;
    }
    else{
      nodes[m[s[i]]].push_back(i);
      nodes[i].push_back(mp[[s[n-1]]]);
    }

  }


  if(mp.find(s[n-1])==mp.end()){
    mp[s[n-1]]=n-1;
  }
  else{
    nodes[mp[s[n-1]]].push_back(n-1);
    nodes[n-1].push_back(mp[[s[n-1]]]);
  }
  queue<int>q;
  q.push(0);
  int cou =0;
  bool visited[100005];
  memset(visited, sizeof(visited),false);
  int level[100005];
  level[0]=0;
  while(!q.empty()){
    int v = q.front();
    cout<<"fkdjflksjfdklsjk  "<<v<<" "<<level[v]<<endl;    q.pop();
    visited[v]=true;
    if(v==(n-1)){
      break;
    }
    cou++;

    for(int i=0;i<nodes[v].size();i++){
      if(!visited[nodes[v][i]]){
        visited[nodes[v][i]]=true;
        q.push(nodes[v][i]);
        level[nodes[v][i]] = level[v]+1;
        cout<<v<<" "<<nodes[v][i]<<endl;
      }
    }
  }
  cout<<level[n-1]<<endl;
}
