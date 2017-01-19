#include<bits/stdc++.h>
using namespace std;
vector<int>a1[105];
bool visited[105]={false};

int coun =0;
int solve(int src)
{


  if(src==100)
  {
    return 0;
  }
  visited[src] = true;
  int a = INT_MAX;
int step=INT_MAX;
  for(int i=0;i<a1[src].size();i++)
  {
    int ans=0;
    int coun1 = 0;
    if(!visited[a1[src][i]])
    {
      //cout<<<<endl;
      ans++;
      if(a1[src][i]!=(i+1))
      {
        ans += (6-(ans%6));
      }
      ans += solve(a1[src][i]);

    }
    step = min(step,ans);

  }

  return step;
}

int main()
{
  for(int i=1;i<100;i++)
  {
    a1[i].push_back(i+1);
  }
int n;
cin>>n;
  while(n--)
  {
    int x,y;
    cin>>x>>y;
    a1[x].push_back(y);
  }
  int m;
  cin>>m;
  while(m--)
  {
    int x,y;
    cin>>x>>y;
    a1[x].push_back(y);
  }
  cout<<solve(1);
  cout<<coun<<endl;
}
