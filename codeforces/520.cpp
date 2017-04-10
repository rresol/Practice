#include<iostream>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
vector<int> powtwo;
int d[100001]={0};
int visited[10005];
int main()
{
  for(int i=0;i<=10000;i++)
  {
    powtwo.push_back(pow(2,i));
  }
  int n,k,i=0;
  queue<int>q;
  cin>>n>>k;
  if(n>=k)
    cout<<(n-k)<<endl;
  else
  {
    q.push(n);
    visited[n] = true;
    while(!q.empty()){
      int a = q.front();
      q.pop();
      if(!visited[a*2] && (a*2<=k*2))
      {
        visited[a*2] = true;
        q.push(a*2);
        d[a*2] = d[a] + 1;
      }
      if(!visited[a-1] && a-1>=0)
      {
        visited[a-1] = true;
        q.push(a-1);
        d[a-1] = d[a] + 1;
      }
      if(visited[k])
        break;
    }
    cout<<d[k]<<endl;
  }
  return 0;
}
