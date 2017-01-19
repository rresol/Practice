#include<bits/stdc++.h>
using namespace std;
int sum[300];

int coinchange(int s[],int m,int n)
{

	if(n==0)
	{
		sum[0] = 1;
		return 1;
	}
	if(n<0)
	{
		return 0;
	}
	if(m<=0 && n>=1)
	{
		sum[n] = 0;
		return 0;
	}
	if(sum[n])
		return sum[n];
	
	sum[n] = coinchange(s,m-1,n) + coinchange(s,m,n-1);
	return sum[n];
}
int main()
{
	int n,m;
	cin>>n>>m;
	int s[m];
	for(int i=0;i<m;i++)
	{
		cin>>s[i];
	}
	cout<<coinchange(s,m,n)<<endl;

}