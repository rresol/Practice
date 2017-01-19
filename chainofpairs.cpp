#include<iostream>
#include<climits>
using namespace std;

struct pairs{
  int a;
  int b;
};

int recursive(struct pairs arr[], int n, int* max_ref )
{
  if(n==1)
    return 1;

  int max_ending_here = 1;
  int res;
  for(int i=1;i<n;i++)
  {
    res = recursive(arr,i,max_ref);
    if(arr[i-1].b<arr[n-1].a && max_ending_here< (res+1))
      max_ending_here = res+1;

  }

      if(*max_ref<max_ending_here)
        *max_ref = max_ending_here;
    return max_ending_here;
}

int _recursive(struct pairs arr[], int n)
{
  int max =1;
  recursive(arr,n,&max);
  return max;
}

int bottomUp(struct pairs arr[], int n)
{
  int result[n];
  for(int i=0;i<n;i++)
    result[i] = 1;
int max_all = INT_MIN;
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(arr[j].b<arr[i].a && result[j]+1>result[i])
      {
        result[i] = result[j] +1;
      }
    }
    max_all = max(result[i],max_all);
  }
  return max_all;

}

int main()
{
  int n;
  cin>>n;
  struct pairs a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i].a;
    cin>>a[i].b;
  }
  int result =_recursive(a,n);
  cout<<result<<endl;
  cout<<bottomUp(a,n)<<endl;

}
