#include<bits/stdc++.h>
using namespace std;
int a[100005];

int solve(int n)
{
  int min_diff=INT_MAX;
  int max_diff=INT_MIN;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      min_diff = min((a[j]-a[i]),min_diff);
      max_diff = max((a[j]-a[i]),max_diff);
    }
  }
  cout<<min_diff<<"  "<<max_diff<<endl;
  int lap[n];
  int ans =0;
  for(int d=min_diff;d<=max_diff;d++)
  {
    //memset(lap,1,sizeof(lap));
    for(int i=0;i<n;i++)
    {
      lap[i] = 1;
    }
    for(int i=0;i<n;i++)
    {
      //cout<<lap[i]<<endl;
      for(int j=0;j<i;j++)
      {
        if(((a[j]+d)==a[i]) && ((lap[j]+1) >lap[i]))
        {
          lap[i] = lap[j]+1;
        }
      }
      ans= max(ans,lap[i]);
    }
    cout<<ans<<endl;
  }
  cout<<ans<<endl;
}



// int solve(int n)
// {
//   sort(a,a+n);
//   int l[n][n];
//   for(int i=0;i<n;i++)
//   {
//     l[i][n-1] =2;
//   }
//   int llap =2;
//   for(int j=n-2;j>=1;j--)
//   {
//     int i = j-1;
//     int k = j+1;
//     while(i>=0 && k<n)
//     {
//       if((a[i]+a[k])<(2*a[j]))
//       {
//         k++;
//       }
//       else if((a[i]+a[k])>(2*a[j]))
//       {
//         l[i][j] = 2;
//         i--;
//       }
//       else{
//         l[i][j] = l[j][k]+1;
//         llap = max(llap,l[i][j]);
//         i--;k++;
//       }
//
//     }
//     while(i>=0)
//     {
//       l[i][j]=2;
//       i--;
//     }
//   }
//   cout<<llap<<endl;
// }

int main()
{
  int n;
  cin>>n;
  //int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  solve(n);
}
