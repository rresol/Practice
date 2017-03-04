#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<long long>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int length = INT_MIN;
  int max_length = INT_MIN;
  long long first =  a[0];
  length = 1;
  max_length = 1;
  for(int i=1;i<n;i++)
  {
    if(a[i]>=a[i-1])
    {
      length+=1;

    }
    else
    {
      length = 1;
    }
    max_length = max(length,max_length);
  }
  cout<<max_length<<endl;
}
