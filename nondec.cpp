#include<iostream>
using namespace std;

long long int bottomUp(int n)
{
  long long sum =0;
  long long int a[10];
  for(int i=1;i<=n;i++)
  {
    sum =0;
    for(int j=9;j>-1;j--)
    {
      if(i==1)
      {
        a[j] =1;

      }

      else if(j==9){
        a[j] = 1;

      }
      else
      {
        a[j] = a[j] + a[j+1];

      }
      sum +=a[j];
    }
  }
  return sum;
}

int main()
{
  int n;
  cin>>n;
  long long ans;
  ans = bottomUp(n);
  cout<<ans<<endl;

}
