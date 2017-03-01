#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
      int b;
      cin>>b;
      a.push_back(b);
    }
    int sum =INT_MIN;
    int max_sum = INT_MIN;
    int max_sum1 = INT_MIN;
    for(int i=0;i<n;i++)
    {
      sum= max(a[i],sum+a[i]);
      max_sum = max(sum,max_sum);
      max_sum1 = max(max_sum1,max(a[i],max_sum1+a[i]));
      
      cout<<max_sum1<<" "<<endl;
    }
    cout<<max_sum<<" "<<max_sum1<<endl;
  }
  return 0;
}
