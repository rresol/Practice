#include <bits/stdc++.h>
//bool matrix[100005][100005];
using namespace std;
bool cmp( const pair<int,int> A, const pair<int,int>B)
{
  return A.second<B.second;
}
int main() {
    int n;
    int m;
    int k;
    cin >> n >> m >> k;
    vector<pair<int,int> >coordinates;
    for(int a0 = 0; a0 < m; a0++){
        int x;
        int y;
        cin >> x >> y;
        coordinates.push_back(make_pair(x,y));
    }
    vector<pair<int,int> >positions;
    vector<pair<int,int> > base_x;
    vector<pair<int,int> > left_y;
    vector<pair<int,int> > top_x;
    vector<pair<int,int> > right_y;
    for(int i=0;i<n;i++)
    {
      if(coordinates[i].second==0)
      {
        base_x.push_back(coordinates[i]);
      }
      if(coordinates[i].first==n && coordinates[i].second!=0)
      {
        left_y.push_back(coordinates[i]);
      }
      if(coordinates[i].second==n && coordinates[i].first!=n)
      {
        top_x.push_back(coordinates[i]);
      }
      if(coordinates[i].first==0 && coordinates[i].second!=n && coordinates[i].second!=0)
      {
        right_y.push_back(coordinates[i]);
      }
    }
    sort(base_x.begin(),base_x.end());
    sort(top_x.begin(),top_x.end());
    reverse(top_x.begin(),top_x.end());
    sort(left_y.begin(),left_y.end(),cmp);
    sort(right_y.begin(),right_y.end(),cmp);
    reverse(right_y.begin(),right_y.end());
    //sort(ans.begin().ans.end());

    positions.insert(positions.end(),base_x.begin(),base_x.end());
    positions.insert(positions.end(),left_y.begin(),left_y.end());
    positions.insert(positions.end(),top_x.begin(),top_x.end());
    positions.insert(positions.end(),right_y.begin(),right_y.end());

    vector<int>dist;

    // for(int i=0;i<positions.size();i++)
    // {
    //   cout<<positions[i].first<<"  "<<positions[i].second;
    // }
    // cout<<endl;

    int sz = positions.size();
    for(int i=1;i<positions.size();i++)
    {
      int x_diff = abs(positions[i].first - positions[i-1].first);
      int y_diff = abs(positions[i].second - positions[i-1].second);
      dist.push_back(x_diff+y_diff);
    }
    int x_diff = abs(positions[sz-1].first - positions[0].first);
    int y_diff = abs(positions[sz-1].second - positions[0].second);
    dist.push_back(x_diff+y_diff);
    int min_sum = INT_MAX;
    int sum =0;
    for(int i=0;i<k-1;i++)
    {
      sum+=dist[i];
    }
    min_sum= sum;
    for(int i=k-1;i<m+k-1;i++)
    {
      sum+= dist[i%(m)];
      sum-= dist[i-k+1];
      min_sum = min(min_sum,sum);
    }
    cout<<min_sum<<endl;
    return 0;
}
