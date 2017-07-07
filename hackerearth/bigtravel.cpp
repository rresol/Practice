#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  long long x[n];
  long long y[n];
  for(int i=0;i<n;i++)
  {
    cin>>x[i];
    cin>>y[i];
  }
  sort(x,x+n);
  sort(y,y+n);
  long long diff_x[n];
  long long diff_y[n];
  long long int dist =0;
  diff_x[0] = 0;
  diff_y[0] = 0;
  long long sum_x,sum_y;
  long long dist_x=0,dist_y=0;
  for(int i=1;i<n;i++)
  {
    diff_x[i] = x[i]-x[0]+diff_x[i-1];
    diff_y[i] = y[i]-y[0]+diff_y[i-1];
    diff_x[i]= diff_x[i]%1000000007;
    diff_y[i] = diff_y[i]%1000000007;
  }
  dist_x = diff_x[n-1];
  dist_y = diff_y[n-1];
  sum_x = dist_x;
  sum_y = dist_y;
  for(int i=1;i<n;i++)
  {
    dist_x += ((sum_x-diff_x[i])-((x[i]-x[0])*(n-i-1)));
    dist_y += ((sum_y-diff_y[i])-((y[i]-y[0])*(n-i-1)));
    dist_x=dist_x%1000000007;
    dist_y = dist_y%1000000007;
  }
  cout<<dist_y+dist_x<<endl;

}
