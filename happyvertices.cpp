#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int x,y;
	cin>>x>>y;
	int parent[n+1];
	int children[n+1];
	vector<int> nodes[n+1];
	memset(parent,0,sizeof(parent));
	memset(children,0,sizeof(children));
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		nodes[x].push_back(y);
		nodes[y].push_back(x);
	}
	stack<int>s;
	s.push(1);
	int visited[n+1];
	memset(visited,0,sizeof(visited));
	visited[1] = 1;
	while(!s.empty())
	{
		int v = s.top();
		s.pop();
		children[v] = nodes[v].size();
		for(int i=0;i<nodes[v].size();i++)
		{
			if(!visited[nodes[v][i]])
			{
				visited[nodes[v][i]] =1;
				s.push(nodes[v][i]);
				parent[nodes[v][i]] +=1;
			}
		}
	}
}
