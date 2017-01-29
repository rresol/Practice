#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<m;i++)
      cin>>b[i];
    set< int >c (a.begin(),a.end());
    c.insert(b.begin(),b.end());
    int len = c.size();
    c.clear();
    cout<<(n+m-len)<<endl;

  }
}
