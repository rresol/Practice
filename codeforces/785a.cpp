#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long ans =0;
  while(n--)
  {
    string a;
    cin>>a;
    if(a=="Icosahedron")
    {
      ans+= 20;
    }
    if(a=="Cube")
    {
      ans+= 6;
    }
    if(a=="Tetrahedron")
    {
      ans+= 4;
    }
    if(a=="Octahedron")
    {
      ans+=8;
    }

    if(a=="Dodecahedron")

    {
      ans+= 12;
    }

  }
  cout<<ans<<endl;
  return 0;
}
