#include<iostream>
using namespace std;
int main()
 {
	//code
       int t;
       cin>>t;
       while(t--)
        {
            int x;
            cin>>x;
            if(x && !(x&(x-1)))
            {

                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }

        }
	return 0;
}
