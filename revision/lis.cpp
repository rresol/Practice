#include<bits/stdc++.h>
using namespace std;

int _lis(int a[], int n, int *max_ref)
{
  if(n==1)
  {
      return a[n-1];
  }
  int res,max_ending_here = a[n-1];
  //cout<<n<<endl;
  for(int i=1;i<n;i++)
  {
    res = _lis(a,i,max_ref);
    cout<<res<<endl;
    if(a[i-1]<a[n-1] && res+max_ending_here>max_ending_here)
    {
      max_ending_here = res+max_ending_here;
    }
  }
  //cout<<max_ending_here<<endl;
  *max_ref = max(*max_ref, max_ending_here);
  return max_ending_here;

}

int lis(int a[], int n)
{
  int ma = INT_MIN;
  _lis(a,n,&ma);
  return ma;
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
  cout<<lis(a,n)<<endl;
}
