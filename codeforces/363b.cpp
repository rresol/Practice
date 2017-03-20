#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  int s[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  s[0]=a[0];
  for(int i=1;i<n;i++)
  {
    s[i] = s[i-1]+a[i];
    //cout<<s[i]<<endl;
  }
  int min_sum  = s[k-1];
  int min_index=0;
  int j=0;
  for(int i=k;i<n;i++)
  {//cout<<s[i]<<"  "<< s[j]<<endl;
    if(min_sum>(s[i]-s[j]))
    {
      min_sum = s[i]-s[j];
      min_index = j+1;
    }
    j++;
  }
  cout<<min_index+1<<endl;
}
