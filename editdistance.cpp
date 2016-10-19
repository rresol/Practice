#include<bits/stdc++.h>
using namespace std;
int min(int x, int y, int z)
{
	return min(x,min(y,z));
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		string s2;
		cin>>s1;
		cin>>s2;
		int m,n,i,j;
		m = s1.length();
		n = s2.length();
		int dp[m+1][n+1];
		for(i=0;i<=m;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(!i)
					dp[i][j] = j;
				else if(!j)
					dp[i][j] = i;
				else if (s1[i-1]==s2[j-1])
				{
					dp[i][j] = dp[i-1][j-1];
				}
				else
				{
					dp[i][j] = 1+ min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
				}
				//cout<<dp[i][j]<<endl;
			}

		}
		cout<<dp[m][n]<<endl;
	}
	return 0;
}