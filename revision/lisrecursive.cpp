#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n,int curr_max)
{
  if(n==0)
    return 0;
  int l1 = lis(a, n-1, curr_max);
  int l2;
  if(a[n-1]>curr_max){
    curr_max = a[n-1];
    l2 = 1+ lis(a,n-1,curr_max);
  }
  else{
    l2 = 0;}
  return max(l1,l2);
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<lis(a,n,INT_MIN)<<endl;
}
