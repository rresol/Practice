#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  long long min_x = LONG_LONG_MAX;
  long long  min_y = LONG_LONG_MAX;
  long long  max_x = LONG_LONG_MIN;
  long long  max_y = LONG_LONG_MIN;
  for(int i=0;i<n;i++)
  {
    long long  x,y;
    cin>>x>>y;
    min_x = min(min_x,x);
    min_y = min(min_y,y);

    max_x = max(max_x,x);
    max_y = max(max_y,y);
  }
  long long  diff_x = max_x-min_x;
  long long  diff_y = max_y-min_y;
  long long  size = max(diff_y,diff_x);
  cout<<size*size<<endl;}
}
