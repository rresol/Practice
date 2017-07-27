#include<bits/stdc++.h>
using namespace std;

int _lis(int a[], int n, int *max_ref){
    if(n==1)
      return 1;
    int res, max_ending_here=1;
    for(int i=1;i<n;i++)
    {
      res = _lis(a,i,max_ref);
      if(a[i-1]<a[n-1] && res+1>max_ending_here)
        max_ending_here= res+1;
    }
    *max_ref = max(*max_ref,max_ending_here);
    return max_ending_here;
}
int lis(int a[],int n)
{
  int max_ref = 1;
  lis(a,n,&max_ref);
  return max_ref;
}

int _lds(int a[],int start, int n, int *max_ref){
    if(n==start)
      return 1;
    int res, max_ending_here=1;
    for(int i=start;i<n;i++)
    {
      res = _lds(a,start,i,max_ref);
      if(a[i-1]>a[n-1] && res+1>max_ending_here)
        max_ending_here= res+1;
    }
    *max_ref = max(*max_ref,max_ending_here);
    return max_ending_here;
}
int lds(int a[], int start,int end)
{
  int max_ref = 1;
  lds(a,start, n,&max_ref);
  return max_ref;
}


int lds(int n, int ans){

}

int aux(int a[], int n)
{
  int ans;
  for(int i=0;i<n;i++)
  {
    ans = max(ans,lis(a,i)+lds(a,i,n));
  }
  cout<<ans<<endl;
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
}
