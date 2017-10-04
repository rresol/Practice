#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,d;
    cin>>n>>d;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    long long sum =0;
    sort(a,a+n);
    for(int i=n-2;i>=0;i--)
    {
      if(a[i+1]-a[i]<d)
      {
        sum+= a[i+1]+a[i];
        i--;
      }
    }
    cout<<sum<<endl;
  }
}
