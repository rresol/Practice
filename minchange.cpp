#include<iostream>
#include<climits>
using namespace std;

long long int recursive(int c[], int sum , int n)
{
  if(sum<0)
    return INT_MAX;
  if(sum==0)
    return 0;

  long long  res = INT_MAX;
  
  for(int i=0;i<n;i++)
  {

    res = min(res,recursive(c,sum-c[i],n)+1);

  }
//cout<<res;
  return res;

}

int main()
{
  int n;
  cin>>n;
  int a;
  cin>>a;
  int c[a];
  for(int i=0;i<a;i++)
    cin>>c[i];

  int ans  = recursive(c,n,a);
  cout<<ans<<endl;

}
