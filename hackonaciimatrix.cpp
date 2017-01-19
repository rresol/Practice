#include<iostream>
using namespace std;
int main()
{
int n,q;
cin>>n>>q;
int hack[n+1][n+1];
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
long long int index = (i*j)*(i*j);
if(index==1)
{
  hack[i][j] = 1;
}
else
{
  if((index-1)%7==0)
  {
    hack[i][j] = 1;
  }
  if((index-1)%7==1)
  {
    hack[i][j] =0;
  }
  if((index-1)%7==2)
  {
    hack[i][j] = 1;
  }
  if((index-1)%7==3)
  {
    hack[i][j] = 0;
  }
  if((index-1)%7==4)
  {
    hack[i][j] = 0;
  }
  if((index-1)%7==5)
  {
    hack[i][j] = 1;
  }
  if((index-1)%7==6)
  {
    hack[i][j] = 1;
  }
}
}
}
// for(int i=1;i<=n;i++)
// {
//   for(int j=1;j<=n;j++)
//   {
//     cout<<hack[i][j]<<" ";
//   }
//   cout<<'\n';
// }
while(q--)
{
int angle;
cin>>angle;
long long int ans =0;
int quot = angle/90;
if(quot%4==0)
{
ans =0;
}
if(quot%4==1)
{
  //cout<<"Hi\n";
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=n;j++)
  {
    if(hack[i][j] != hack[j][n+1-i])
    {
      ans++;
    }

  }
}
}
if(quot%4==2)
{
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=n;j++)
  {
    if(hack[i][j] != hack[n-i+1][n-j+1])
    {
      ans++;
    }

  }
}
}
if(quot%4==3)
{
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=n;j++)
  {
    if(hack[i][j] != hack[n+1-j][i])
    {
      ans++;
    }

  }
}
}
cout<<ans<<endl;
}
}
