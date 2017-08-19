#include<bits/stdc++.h>
using namespace std;
int solve(string S, string T) {

    int n = S.size();
    int m = T.size();
    int ans[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j==0)
            {
              ans[i][j] = 1;
            }
            else{
            ans[i][j] = 0;}
        }
    }
    ans[0][0] = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {

            if(S[i-1]==T[j-1])
            {
                ans[i][j] = ans[i-1][j]+ans[i-1][j-1];
            }
            else
            {
                ans[i][j] = ans[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=m;j++)
      {
        cout<<ans[i][j]<<" ";
      }
      cout<<endl;
    }
    return ans[n][m];

}


int main()
{
  string s;
  string t;
  cin>>s>>t;
  solve(s,t);
}
