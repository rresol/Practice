#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int a[n];
		int ans=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			ans = ans|x;
		}
		cout<<ans<<endl;

	}
	return 0;
}