#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long int m;
  cin>>m;
  long long int kmax = n-(m-1);
  long long   int kmin = n/m;
  long long int rem  = n%m;
  long long int min_ans = m*((kmin-1)*(kmin)/2)+  (rem*kmin);
  //cout<<kmax<<" "<<kmin<<endl;
  cout<<min_ans<<" ";
  cout<<((kmax-1)*(kmax)/2)<<endl;

}
