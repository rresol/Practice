#include<bits/stdc++.h>
using namespace std;
bool increas=false;
bool constant=false;
bool decreasing=false;
int maxn = 0;
int num[1010];
int id;
int main()
{
  int n;
  cin>>n;
  int a[n+1];


  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    if(a[i]>maxn)
    {
      maxn=a[i];
      id = i;
    }
    num[a[i]]++;
  }
for(int i=2;i<id;i++)
{
  if(a[i]==a[i-1])
  {
    cout<<"no"<<endl;
    return 0;
  }
}
for(int i=id+1;i<id+num[maxn];i++)
{
  if(a[i]!=a[i-1])
  {
    cout<<"'no'"<<endl;
    return 0;
  }
}
for(int i=id+num[maxn];i<=n;i++)
{
  if(a[i]==a[i-1])
  {
    cout<<"'no'"<<endl;
    return 0;
  }
}
if(num[maxn]==n){
  cout<<"YEs"<<endl;
  return 0;
}
else if(maxn==a[n]){cout<<"NO"<<endl;return 0;}
if(a[id-1]<a[id] && a[id+num[maxn]]<a[id]){
  cout<<"YEs"<<endl;return 0;
}
cout<<"No";
  return 0;
}
