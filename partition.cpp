#include<iostream>
#include<algorithm>
using namespace std;
bool recursive(int a[],int n, int sum)
{
  if(n==0)
    return false;
  if(sum==0)
    return true;
  if(sum<0)
    return false;
  bool result = false;
  result = recursive(a,n-1,sum-a[n-1]) || recursive(a,n-1,sum);
  return result;
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    int total =0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      total +=a[i];
    }
    if((total%2))
      {
        //cout<<"Hi"<<endl;
        cout<<"NO"<<endl;
      }
    else{
        if(recursive(a,n,total/2))
        {
          cout<<"Yes"<<endl;
        }
        else
        {
          cout<<"No"<<endl;
        }
    }

  }
  return 0;
}
