#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long  int a[100005];
long long int b[100005];
bool c[100005];
long long int max_len;
int recurse(int i)
{
  if(i==-1)
  {
    return INT_MIN;
  }
  if(c[i]&&!b[i])
  {
    return 0;
  }

  c[i] = true;
  if(a[i]!=-1 && recurse(a[i])!=INT_MIN){
  b[i] = 1 + recurse(a[i]);
  if(c[a[i]])
  {
    b[i] = b[a[i]];
    max_len = max(b[a[i]],max_len);
  }
  return b[i];
}
  else
  {
    b[i] = -1;
    return INT_MIN;
  }
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    recurse(i);
  }
  cout<<max_len<<endl;
}
