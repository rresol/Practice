#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second

int parent[50100];
bool visited[50100];
int dist[50100];

int main()
    {
    int n,e;
    cin>>n>>e;
    vector< pair<int,int>  > g[n+1];

    while(e--)
        {
        int u,v,c;
        cin>>u>>v>>c;
        g[u].pb(mp(v,c));
        g[v].pb(mp(u,c));
    }
    queue<pair<int,int> >q;
    q.push(mp(1,0));
    visited[1] = true;
    dist[1] = 0;
    while(!q.empty())
        {
        int ver = q.front().F;
        //int weight = q.front().S;
        q.pop();
        //visted[ver] = true;
        for(size_t j=0;j<g[ver].size();j++)
            {
            int to = g[ver][j].F;
            int weight = g[ver][j].S;
            if(visited[to])
                {
                dist[to] = min(dist[to],max(weight,dist[ver]));
            }
            else
                {
                visited[to] = true;
                q.push(mp(to,weight));
                parent[to] = ver;
                dist[to] = max(weight,dist[ver]);
            }
        }
    }
    if(dist[n]==INT_MAX)
        {
        cout<<"NO PATH EXISTS"<<endl;
    }
    else
        {
        cout<<dist[n]<<endl;
    }
}
