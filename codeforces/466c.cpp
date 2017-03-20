#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long int a[n];
  long long sum =0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+= a[i];
  }
  int j=0,k=n-1;
  int cou=0;
  int sum1 =0;
  int sum2 =0;
  while(j<=k)
  {

    cout<<j<<" "<<k<<endl;
    if(sum1>sum2)
    {
      sum2+=a[k];
      k--;
    }
    if(sum1<sum2)
    {
      sum1+= a[j];
      j++;
    }
    if(sum1==sum2)
    {
      if((sum-(sum1+sum2))==sum1)
      {
        cout<<"Hi"<<endl;
        cou++;
      }
      if(sum1+a[j]==sum2)
      {
        sum1+=a[j++];
      }
      else if(sum2+a[k]==sum1)
      {
        sum2+=a[k--];
      }
      else
      {
        sum1+=a[j++];
      }
    }

    cout<<sum1<<" "<<sum2<<" "<<sum<<endl;
  }
  cout<<cou<<endl;

}
