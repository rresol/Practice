#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  long long int sum =0;
  int start = 1;
  for(int i=0;i<m;i++)
  {
    int x;
    cin>>x;
    if(start>x)
    {
      sum+= (n-start)+x;

    }
    else
    {
      sum+= fabs(start-x);
    }
    start =x;
  }
  cout<<sum<<endl;
}
