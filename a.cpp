#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c,v1,v2,a,l;
	cin>>c>>v1>>v2>>a>>l;
	int i=0;
	while(c>0){

		v1>v2?v2:v1;
		v1-=l;
		c-=v1;
		i++;
		v1+=a;
	}
	cout<<i<<endl;
}
