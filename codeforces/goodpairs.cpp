#include<bits/stdc++.h>
using namespace std;
int b[1000002]={0};
int main()
{

  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[a[i]]++;
  }
  int cou =0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if((a[i]|a[j])<=max(a[i],a[j]))
      {
        cou+=(b[a[i]]*b[a[j]]);
        //cout<<a[i]<<" "<<a[j]<<endl;
      }
    }
  }
  for(int i=0;i<=1000002;i++)
            {
                if(b[i]>0)
                {

                    cou+=((b[i]*(b[i]-1))/2);
                }
            }
  cout<<cou<<endl;}
  return 0;
}
