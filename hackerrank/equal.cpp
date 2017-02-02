#include<bits/stdc++.h>
using namespace std;

int dp[100000];

void change(int n)
{
  dp[n-1]=1;
  dp[2*(n-1)]=1;
  dp[3*(n-1)]= 2;
  dp[4*(n-1)]= 2;
  dp[5*(n-1)]=1;
  for(int i=6;i<100000;i*=(n-1))
  {
    dp[i] = min(dp[(i-(5*(n-1)))>0?(i-(5*(n-1))):0],min(dp[(i-(2*(n-1)))>0?(i-(2*(n-1))):0],dp[(i-(1*(n-1)))>0?(i-(1*(n-1))):0]));
    dp[i]+=1;
  }
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    long long sum =0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
    sort(a,a+n);
    int m = a[n-1];
    int j =0;
    while(1)
    {
      if((((m+j)*(n))-sum)>0 &&(((m+j)*n)-sum)%(n-1)==0)
        break;
      j++;
    }
    change(n);
    long dif  = ((m+j)*n)-sum;
    //cout<<(((m+j)*n))<<endl;
    cout<<dp[dif]<<endl;
  }
}
