#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    vector< pair<long long int,long long int > >a;

    vector<long long int> side;
    for(long long int i=0;i<n;i++)
    {
      long long int x,y;
      cin>>x>>y;
      a.push_back(make_pair(x,y));

    }
    long long int m;
    cin>>m;
    vector< pair<long long int,long long int> >cost;
    for(long long int i=0;i<m;i++)
    {
      long long int p,l;
      cin>>p>>l;
      cost.push_back(make_pair(p,l));
    }
long long int dist;
    for(long long int i=0;i<n-1;i++){
              dist=ceil(sqrt(pow(a[i].first-a[i+1].first,2)+pow(a[i].second-a[i+1].second,2)));
              side.push_back(dist);
          }
          dist=ceil(sqrt(pow(a[0].first-a[n-1].first,2)+pow(a[0].second-a[n-1].second,2)));
        side.push_back(dist);

    long long ans =0;
    for(long long int i=0;i<n;i++)
    {
      //cout<<side[i]<<endl;
      long long cheap = LONG_LONG_MAX;
      for(long long int j=0;j<m;j++)
      {

          long long int tot = (side[i]/cost[j].first);
          if(side[i]%cost[j].first!=0)
          {
            tot+= 1;
          }
          tot*=cost[j].second;
          cheap= min(cheap,tot);
          //cout<<side[i]<<" "<<tot<<" "<<cheap[i]<<endl;
      }
      ans+=cheap;
    }
    cout<<ans<<endl;

  }
}
