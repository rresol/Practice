#include<iostream>
#include<climits>
using namespace std;

int recursive(int arr[], int n, int *max_ref)
{
  if(n==1)
    return 1;

  int res, max_ending_here =1;
  for(int i=1;i<n;i++)
  {
    res = recursive(arr,i,max_ref);
    if(arr[i-1]<arr[n-1]&&res+1>max_ending_here)
    {
      max_ending_here = res+1;
    }
  }

  if(*max_ref<max_ending_here)
  {
    *max_ref = max_ending_here;
  }
  return max_ending_here;
}

int _recursive(int arr[], int n)
{
   int max = 1;
   recursive(arr, n, &max);
   return max;
}


int bottomUp(int arr[],int n)
{
  int lis[n];
  for(int i=0;i<n;i++)
    lis[i] = 1;

 int max_all = 1;
  for(int i=1;i<n;i++)
  {
    int max_len= INT_MIN;

    for(int j=0;j<i;j++)
    {
      if(arr[j]<arr[i])
      {
        max_len = max(max_len, lis[j]);
      }
    }
    lis[i]  = max(lis[i],1 + max_len);
    max_all = max(lis[i],max_all);
  }
  return max_all;
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
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int result = bottomUp(a,n);
cout<<result<<end;}
return 0;
}
