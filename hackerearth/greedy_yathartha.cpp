#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  ios_base::sync_with_stdio(false);
  cin>>n>>k;
  vector<long long int>a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a.begin(),a.end());
  long long cost=0;
  long long  x= 0;
  long long cou =0;
  for(int i=n-1;i>=0;i--)
  {
    a[i] = a[i]*(x+1);
    cou++;
    if(cou==k)
    {
      x++;
      cou =0;
    }
  }
  for(int i=n-1;i>=0;i--)
  {
    cost+=a[i];
  }
  cout<<cost<<endl;
}
