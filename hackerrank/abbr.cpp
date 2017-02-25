#include<iostream>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
    string s1,s2;
    cin>>s1>>s2;
    int flag =1;
    if(s1.length()>=s2.length())
    {
      int i,j;
      i=0;j=0;
      for(int i=0;i<s1.length();i++)
      {
        if(isupper(s1[i]))
        {
          if(s1[i]==s2[j])
            j++;
          else{
            //flag =1;
            break;
          }
        }
        else{
          if(s1[i]==tolower(s2[j]))
            j++;
        }
        if(j==s2.length())
        {
          flag =0;
          break;
        }
      }
    }
    if(!flag)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
}
