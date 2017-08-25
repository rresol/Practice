#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n = s.size();
  int k;
  cin>>k;
  vector<int>arr(26);
  vector<int>ele(26);
  for(int i=0;i<26;i++)
  {
    cin>>arr[i];
    ele[i] =arr[i];
  }
  sort(arr.begin(),arr.end());
  int j = 26-k;
  int sum=0;
  int i =0;
  int tot =0;
  for(int i=0;i<n;i++)
  {
    sum+= ((i+1)*(ele[s[i]-'a']));
  }
  for(int i=n;i<(n+k);i++)
  {
    sum+=((i+1)*(arr[25]));
  }
  cout<<sum<<endl;
}
