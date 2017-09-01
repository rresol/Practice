#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,b;
  cin>>m>>b;
  int x = m*b;
  int y = b;
  vector<long long int >ans(y+1);
  //long long int ans[x+1][y+1];
  long long int max_area = 0;
  int i =0;
  int v = floor(float(b)-(float(i)/float(m)));
  //cout<<v<<endl;
  long long int sum =0;
  for(int j=0;j<=v;j++)
  {
      ans[j] = i+j;
      sum+=ans[j];
      ans[j] = sum;
  }
  //cout<<ans[b]<<endl;
  max_area = max(sum, max_area);
  int to_add=0;
  for(int i=1;i<=x;i++)
  {
    int v = floor(float(b)-(float(i)/float(m)));
    //cout<<v<<endl;
    cout<<ans[v]<<endl;
    long long sum = ans[v]+ans[v];
    to_add += (i*(v+1));
    sum+=to_add;
    to_add-=i;
    cout<<sum<<endl;
    max_area = max(max_area, sum);
  }
  cout<<max_area<<endl;
  return 0;
}
