#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<string>a;
    for(int i=0;i<n;i++)
    {
      string b;
      cin>>b;
      a.push_back(b);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<endl;
    }
    int ans[27]={0};
    string final="";
    for(int i=0;i<n;i++)
    {
      string k = a[i];
      for(int j=0;j<k.length();j++)
      {
        cout<<k[j]<<" ";
        ans[k[j]-97]++;
        cout<<ans[k[j]-97]<<endl;
        if(ans[k[j]-97]==n)
        {
          final+=k[j];
        }
      }
    }
    cout<<final<<endl;

}
