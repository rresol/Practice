#include<iostream>
#include<climits>
using namespace std;

int recursive(int arr[], int n, int* max_ref)
{
  if(n==1)
  {
    return arr[0];
  }
  int res, max_ending_here = arr[n-1];
  for(int i=1;i<n;i++)
  {
    res = recursive(arr,i,max_ref);
    if((arr[i-1]<arr[n-1])&&(res+arr[n-1]>max_ending_here))
    {
      max_ending_here = res + arr[n-1];
    }
  }
  if(*max_ref<max_ending_here)
    *max_ref = max_ending_here;

  return max_ending_here;
}

int _recursive(int arr[], int n)
{
  int max = arr[n-1];
  recursive(arr,n,&max);
  return max;
}

int bottomUp(int arr[], int n)
{
  int sis[n];
  for(int i=0;i<n;i++)
    sis[i] = arr[i];

  int max_all =sis[0];
  for(int i=1;i<n;i++)
  {
    int max_sum = INT_MIN;
    for(int j=0;j<i;j++)
    {
      if(arr[j]<arr[i])
      {
        max_sum = max(max_sum,arr[i] + sis[j]);
      }
    }
    sis[i] = max(max_sum,sis[i]);
    max_all = max(sis[i],max_all);
  }
  return max_all;
}


int main()
{
   int t;
   cin>>t;
   while(t--){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    //int result = _recursive(a,n);
    //cout<<result<<endl;
    cout<<bottomUp(a,n)<<endl;
}
}
