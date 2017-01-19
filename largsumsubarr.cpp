#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }


    int max_sum  = a[0];
    int sum = a[0];
    int i;
    for( i=1;i<n;i++)
    {
      sum += a[i];
      if(sum<0)
      {
        sum = max(sum,a[i]);

      }
      if(sum<a[i])
      {
        sum = a[i];
      }
      max_sum = max(max(sum,a[i]),max_sum);
      cout<<"a[i]"<<a[i];
      cout<<"    sum"<<sum;
      cout<<"    max_sum"<<max_sum<<endl;
    }

  }
  return 0;
}
