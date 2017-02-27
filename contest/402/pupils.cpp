#include<iostream>
#include<cmath>
using namespace std;
int a[6],b[6];

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
    a[k]++;
  }
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
    b[k]++;
  }
  int ans1=0,ans2 =0,flag =0;
  for(int i=1;i<6;i++)
  {
    //cout<<a[i]<<" "<<b[i]<<endl;
    if(((a[i]+b[i])%2)==0)
    {
      int c = a[i]-b[i];
      if(c>0)

      {
        ans1+= (c/2);
      }
      else
      {
        ans2+= (fabs(c)/2);
      }
    }
    else
    {
      flag = 1;
      break;
    }
  }
  if((ans1==ans2) && !flag)
  {
    cout<<ans1<<endl;
  }
  else{
    cout<<-1<<endl;
  }
  return 0;
}
