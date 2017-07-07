#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  scanf("%lld",&n);
  long long  int a[n];
  long long int b[n];
  for(long long int i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    scanf("%lld",&b[i]);
  }
  sort(a,a+n);
  sort(b,b+n);
  int sum = 0;
  for(int i=0;i<n;i++)
  {
    sum+= fabs(a[i]-b[i]);
  }
  cout<<sum<<endl;
}
