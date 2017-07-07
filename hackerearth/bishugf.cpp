#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> nodes[n+1];
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		nodes[u].push_back(v);
		nodes[v].push_back(u);
	}
	int q;
	cin>>q;
	int girls[n+1];
	memset(girls,0,sizeof(girls));
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		girls[x] = 1;
	}
	int visited[n+1];
	memset(visited,-1,sizeof(visited));
	stack<int>s;
	s.push(1);
	visited[1]  = 0;
	while(!s.empty())
	{
		int v = s.top();
		s.pop();
		for(int i=0;i<nodes[v].size();i++)
		{
			if(visited[nodes[v][i]]==-1)
			{
				s.push(nodes[v][i]);
				visited[nodes[v][i]] = visited[v] +1;
			}
		}
	}
	int ans = INT_MAX;
	int index = -1;
	for(int i=1;i<=n;i++)
	{
		//cout<<visited[i]<<endl;
		if(visited[i]!=-1 && girls[i])
		{
			if(ans>visited[i])
			{
				ans = visited[i];
				index = i;
			}
		}
	}
	cout<<index<<endl;
	return 0;
}