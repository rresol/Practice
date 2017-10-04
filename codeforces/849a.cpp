#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  bool flag = false;
  if(a[0]%2 && a[n-1]%2)
  {
    flag = true;
  }
  if(flag && (n%2!=0))
  {
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
