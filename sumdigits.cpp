#include<iostream>
using namespace std;

int recursive(int n, int sum)
{
  if(n==0)
    return sum==0;

   int ans =0;
  for(int i=0;i<=9;i++)
  {
    if(sum-i>=0)
      ans += recursive(n-1,sum-i);
  }
  return ans;
}

int main()
{
  int n;
  cin>>n;
  int sum;
  cin>>sum;
  int result = recursive(n,sum);
  cout<<result<<endl;
}
