#include<iostream>
#include<cmath>
using namespace std;
int min(int a, int b);
long long int C[1000][1000];
long long int binomialCoeff(long long int n,long long int k)
{
    long long int res = 1;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (long long int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}
long long int power(long long int x, long long int y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return ((temp%1000000007)*(temp%1000000007))%1000000007;
    else
        return ((x%1000000007)*(temp%1000000007)*(temp%1000000007))%1000000007;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,i,count;
    cin>>n;
    //binomialCoeff(1000,1000);
    // for(i=1;i<=n;i++)
    // {
    //   if(i==1 || i==2)
    //   {
    //     count = 0;
    //   }
    //   else{
    //     count = ((count%1000000007)+  (((i-2)%1000000007)*(fact(i-1))%1000000007)%1000000007)%1000000007;
    //     count = count%1000000007;
    //   }
    // }
    //count=0;
    count =0;
    if(n>=3){
      long long num = 1;
    // for(i=1;i<n;i++)
    // {
    //   num = ((num%1000000007) *(2%1000000007))%1000000007;
    // }
    num = (power(2,n-1))%1000000007;
    num -= 2;
    count = num;
  }

    cout<<count<<endl;

  }
}
