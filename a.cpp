#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char, int>m;
	m['v']=118;
	m['<'] = 60;
	m['^']  = 94;
	m['>'] = 62;
	int a1[] = {118,60,94,62};
	int a2[] = {118,62,94,60};
	char x1,x2;
	cin>>x1>>x2;
	int c1,c2;
	c1 = m[x1];
	c2 = m[x2];
	int n;
	//cout<<c1<<c2<<endl;
	cin>>n;
	n = n%4;
	int c_index;
	int ac_index;
	for(int i=0;i<4;i++)
	{
		if(a1[i]==c1)
		{
			ac_index = i;
			break;
		}
	}
	for(int i=0;i<4;i++)
	{
		if(a2[i]==c1)
		{
			c_index = i;
			break;
		}
	}
	if(a1[(ac_index+n)%4]==c2 && a2[(c_index+n)%4]==c2)
	{
		cout<<"undefined"<<endl;

	}
	else if(a1[(ac_index+n)%4]==c2)
	{
		cout<<"cw"<<endl;
	}
	else if(a2[(c_index+n)%4]==c2)
	{
		cout<<"ccw"<<endl;
	}
	else
	{
		cout<<"undefined"<<endl;
	}
	return 0;

}
