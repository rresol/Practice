#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,l;
  cin>>n>>l;
  vector<int> a;
  for(int i=0;i<n;i++)
  {
    int b;
    cin>>b;
    a.push_back(b);
  }
  sort(a.begin(),a.end());
  int first = 0;
  double res = max(a[0]-0,l-a[n-1]);
  for(int i=1;i<n;i++)
  {
    if((double(a[i]-a[i-1]))/2.0 > res)
    {
      res = (a[i]-a[i-1])/2.0;
    }
  }

   printf("%.10f\n",res);
  return 0;

}
