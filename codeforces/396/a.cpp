#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a,b;
  cin>>a;
  cin>>b;
  if(a==b)
    {
      cout<<-1<<endl;
      return 0;
    }

  int i=0;
  int ans =0;
  int cou =0;
  int m = a.length();
  int n = b.length();
  if(m>n)
  {
    cout<<m<<endl;
    return 0;
  }
  else if(m<n)
  {
    cout<<n<<endl;
    return 0;
  }
  //cout<<m<<n;

  cout<<m<<endl;
  return 0;
}
