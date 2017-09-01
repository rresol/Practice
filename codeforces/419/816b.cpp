#include<bits/stdc++.h>
using namespace std;
//vector<char>(200005);
vector<int>a(200005);
int main()
{
  int n,k,q;
  cin>>n>>k>>q;
  vector<int>m[200005];
  for(int i=0;i<n;i++)
  {
    int l,r;
    cin>>l>>r;
    for(int j=l;j<=r;j++)
    {
      a[j]++;
      m[a[j]].push_back(j);
    }
  }
  while(q--)
  {
    int l,r;
    cin>>l>>r;
    int cou =0;

    for(int i= 0;i<m[k].size();i++)
    {
      if(m[k][i]>=l && m[k][i]<=r)
        cou++;
    }
    cout<<cou<<endl;
  }
  return 0;
}
