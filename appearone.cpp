#include<iostream>
using namespace std;

int getSingle(int arr[], int n)
{
  int ones = 0, twos =0;
  int common_bit_mask;
  for(int i=0;i<n;i++)
  {
    twos = twos | (ones & arr[i]);
    ones = ones ^ arr[i];
    common_bit_mask = ~(ones & twos);
    ones &= common_bit_mask;
    twos &= common_bit_mask;
  }
  return ones;
}

int main()
{
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int res = getSingle(a,n);
    cout<<res<<endl;

  }
  return 0;
}
