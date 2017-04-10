#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,h;
	cin>>n>>d>>h;
	if(n>=3){
		if(d>2*h || d==1)
		{
			cout<<-1<<endl;
		}
		else
		{
			int i,j;
			n--;
			for(i=1;i<=h;i++)
			{
				cout<<i<<" "<<i+1<<endl;
				n--;
			}
			i++;
			if(d>h)
			{
				int rem = d-h;
				int first = 1;
				
				while(rem--)
				{
					cout<<first<<" "<<i<<endl;
					first = i;
					//cout<<
					i++;
					n--;
				}
				while(n--)
			{
				cout<<1<<" "<<i++<<endl;
			}

			}
				else{
					while(n--)
			{
				cout<<2<<" "<<i++<<endl;
			}
			}
			//int rem = 
			

		}
	}
	else
	{
		if(d==1 && h==1)
		{
			cout<<1<<" "<<2<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}