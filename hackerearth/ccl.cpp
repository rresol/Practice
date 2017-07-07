#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int index =0;
    while(index!=s.size()-1)
    {
      if(s[index]==s[index+1])
      {
        s.erase(s.begin()+(index+1));
      }
      else{
        index++;
      }
    }
  cout<<s<<endl;
  }
}
