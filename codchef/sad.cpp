#include<bits/stdc++.h>
using namespace std;
int main()
{
  int r,c;
  cin>>r>>c;
  long long a[r][c];
  long long col[c];
  long long row[r];
  int index;
  for(int i=0;i<r;i++)
  {
    long long m = INT_MAX;

    for(int j=0;j<c;j++)
    {
      cin>>a[i][j];
      //index = j;
      if(a[i][j]<m)
      {
        m = a[i][j];
        index = j;
      }
    }
    row[i] = index;
  }
  for(int i=0;i<r;i++)
  {
    long long m = INT_MIN;

    for(int j=0;j<c;j++)
    {
      m = max(a[i][j],m);
    }
    col[i] = m;
  }
  int flag =0,i;
  for( i=0;i<r;i++)
  {
    if(a[i][row[i]]==col[row[i]])
    {
      flag =1;
      break;
    }
  }
  if(flag)
  {
    cout<<col[i]<<endl;
  }
  else
  {
    cout<<"GUESS\n"<<endl;
  }
  return 0;
}
