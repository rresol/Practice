#include<iostream>
using namespace std;
int main()
 {
	//code
       int t;
       cin>>t;

       while(t--)
        {
            int n;
            cin>>n;
            int cou =0;
            int l;
            while(n){
              cou++;
            l = n;
            int i=0;
            while(l)
            {
              l>>=1;
              i++;
            }

            int v = 1<<(i-1);
            //cout<<v<<endl;
            //cout<<v<<endl;
            n = n-v;
          }
          cout<<cou<<endl;
        }
	return 0;
}
