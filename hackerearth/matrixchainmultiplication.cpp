#include<bits/stdc++.h>
using namespace std;

int matrixChain(vector<int>arr, int start, int end){
  if(start==end)return 0;
  cout<<"Step "<<" "<<start<<endl;
  int count = INT_MAX;
  for(int i=start;i<end;i++)
  {
    int val = arr[start-1]*arr[i]*arr[end]+matrixChain(arr,start,i)+matrixChain(arr,i+1,end);
      count = min(val,count);
  }
  return count;
}

int dp[1005][1005];

int efficient(vector<int>arr){
  int n= arr.size();
  for(int k=2;k<n;k++)
  {
    for(int i=1;i<n-k+1;i++)
    {
      int l = i+k-1;
      for(int j=i;j<l;j++)
      {
          q = dp[i][j] + dp[j+1][l] + arr[i-1]*arr[j]*arr[l];
      }
    }
  }
}


int main()
{
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];

  cout<<matrixChain(arr,1,n-1)<<endl;

}
