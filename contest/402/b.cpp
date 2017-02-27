#include<iostream>
using namespace std;
int main()
{
  string n;
  int k;
  cin>>n;
  cin>>k;
  int cou=0;
   int ans=0;
  if(n.length()<=k)
  {
    cou = n.length()-1;
  }

  else{
    for(int i=n.length()-1;i>=0;i--)
    {
      if(n[i]!='0')
        {cou++;
        }
        else{
          ans++;
        }
        if(ans==k)
          break;
    }
  }
  if(ans!=k)
  {
    cou = n.size()-1;
  }
  cout<<cou<<endl;
  return 0;
}
