#include<bits/stdc++.h>
using namespace std;
int prices[100001];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    prices[x]++;
  }
  for(int i=1;i<100001;i++)
  {
    prices[i] = prices[i-1]+prices[i];
  }
  int q;
  cin>>q;
  while(q--)
  {
    long long  k;
    cin>>k;
    if(k>100001)
    {
      cout<<n<<endl;
    }
    else{
      cout<<prices[k]<<endl;
    }
  }
  return 0;
}
