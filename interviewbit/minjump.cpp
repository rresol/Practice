#include<iostream>
using namespace std;
int main()
 {
	//code
       int t;
       cin>>t;
       long long ans[3];
      //memset(ans,0,sizeof(ans));
        ans[0]=1;
        ans[1]=2;
        ans[2]=4;
        int i;
       while(t--)
        {
            int n;
            cin>>n;
            if(n<=3)
            {
                cout<<ans[n-1]<<endl;
            }
            else
            {

                i=3;
                while(i<n)
                {
                    ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
                    ans[i%3]=ans[i];
                    i++;
                }
            }
            cout<<ans[(i-1)%3]<<endl;

        }
	return 0;
}
