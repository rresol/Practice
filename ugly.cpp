#include<iostream>
#include<cstdio>
using namespace std;
int a[100005];
int main()
{
  int t;
  cin>>t;
  while(t--){

  int n,j;
  cin>>n;
  long long i,ans;
  for(i=1;i<=5;i++)
  {
    a[i] = 1;
    if(i==n)
    {
      ans =i;
      break;

    }
  }
  j =5;
  if(n>j)
{
    while(true)
  {
    if((i%2)==0)
    {
      a[i] = a[i/2];
    }
    else if ((i%3)==0)
    {
      a[i] = a[i/3];
    }
    else if((i%5)==0)
    {
      a[i] = a[i/5];
    }
    else
    {
      a[i] =0;
    }

    if(a[i])
    {
      j++;
    }
    if(j==n)
    {
        ans =i;
        break;
    }
    i++;
  }
}

    printf("%lld\n",ans );
  }

  }
