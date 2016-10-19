#include<iostream>
using namespace std;

int recursivelis(int arr[], int n, int *max_ref)
{
  if(n==1)
    return 1;

  int res, max_ending_here =1;
  for(int i=1;i<n;i++)
  {
    res = recursivelis(arr,i,max_ref);
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

int _recursivelis(int arr[], int n)
{
   int max = 1;
   recursivelis(arr, n, &max);
   return max;
}
int recursivelds(int arr[], int n, int *max_ref)
{
  if(n==1)
    return 1;

  int res, max_ending_here =1;
  for(int i=1;i<n;i++)
  {
    res = recursivelds(arr,i,max_ref);
    if(arr[i-1]>arr[n-1]&&res+1>max_ending_here)
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

int _recursivelds(int arr[], int n)
{
   int max = 1;
   recursivelds(arr, n, &max);
   return max;
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
  cout<<_recursivelds(a,n)<<endl;
  cout<<_recursivelis(a,n)<<endl;
}
