#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k;
  cin>>n>>k;
  long long int a[n];
  long long sum=0;
  for(int i=0;i<n;i++)
  {
    long long int b;
    cin>>b;
    a[i] = ((b/k)+(((b%k)==0)?0:1))*k;
    sum+= a[i];
  }
  if(sum%(2*k)==0)
  {
    cout<<sum/(2*k)<<endl;
  }
  {
    cout<<sum/(2*k)+1<<endl;
  }
  return 0;
}
