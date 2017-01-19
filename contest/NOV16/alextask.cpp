#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;
long int gcd(long int a,long  int b)
{
    // base case
    while(b>0)
    {
      long temp = b;
      b= a%b;
      a = temp;
    }
    return a;
}

// Function to return LCM of two numbers
long int lcm(long int a,long int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    long int lowest_lcm = 2147483000;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          long int min_m = min(a[i],a[j]);
          min_m = lcm(a[i],a[j]);
          lowest_lcm = min(lowest_lcm,min_m);
      }
    }
    printf("%ld\n",lowest_lcm );
  }
}
