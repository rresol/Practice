#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,v1,v2;
    cin>>n>>v1>>v2;
    double stairs = pow(2,0.5)*n;
    //cout<<stairs<<endl;
    double elev  = n;
    stairs = stairs/v1;
    elev = 2*(double(n)/v2);
    //cout<<stairs<<" "<<elev<<endl;
    if(stairs<elev)
      cout<<"Stairs"<<endl;
    else
      cout<<"Elevator"<<endl;
  }
  return 0;
}
