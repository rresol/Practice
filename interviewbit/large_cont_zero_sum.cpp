#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  map<long long, int>hash;
  int sum =0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
    hash[sum]= i;
  }
  if(hash.find(0)!=hash.end())
  {
    cout<<hash[0]+1<<endl;
    return 0;
  }
  sum =0;
  int large = -1;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
    //cout<<hash[sum]<<endl;
    if(hash.find(sum)!=hash.end()&&hash[sum]!=i)
    {
      large = max(large,hash[sum] - i);
    }
  }
  cout<<large<<endl;
}
