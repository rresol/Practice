#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
  int n;
  cin>>n;
  int cou=0;
  int max_cou = 0;
  for(int i=0;i<(2*n);i++)
  {
    int b;
    cin>>b;
    if(a[b])
    {
      cou--;
    }
    else
    {
      cou++;
    }
    //cout<<cou<<endl;
    max_cou = max(cou,max_cou);
    a[b]++;
  }
  cout<<max_cou<<endl;
  return 0;
}
