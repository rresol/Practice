#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  //bool flag = true;
  for(int i=0;i<n;i++)
  {

    for(int j=0;j<n;j++){
      map<int,int>m;
      for(int k=0;k<n;k++)
      {
        m[a[k][j]]++;
      }
      if(a[i][j]!=1)
      {
        bool flag = false;
        for(int k=0;k<n;k++)
        {
          if(m[a[i][j]-a[i][k]])
          {
            flag = true;
            break;
            //cout<<"No"<<endl;
            //flag = fals
            //return 0;//break;
          }
        }
        if(!flag)
        {
          cout<<"No"<<endl;
          return 0;
        }

      }
    }
  }
  cout<<"Yes"<<endl;
  return 0;

}
