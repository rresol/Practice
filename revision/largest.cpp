#include<bits/stdc++.h>
using namespace std;
bool cmp(const string a, const string b)
{
  return a>b;
}
int main()
{
  vector<string>a;
  a.push_back("3");
  a.push_back("30");
  a.push_back("34");
  a.push_back("5");
  a.push_back("9");
  sort(a.begin(),a.end(),cmp);
  for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}
