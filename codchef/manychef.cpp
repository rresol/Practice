#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int s;
    cin>>s;
    int j=0 ;
    for(int i=s.length()-1;i>=0;i++)
    {

      if(s[i]=="F")
      {
        if(j%4==0){
        j++;}
        else
        {
          j = 0;
        }
      }
      else if(s[i]=="E")
      {
        if(j%4==1)
        {
          j++;
        }
        else
        {

        }
      }
      else if(s[i]=="H")
      {
        if(j%4==2)
        {
          j++;
        }
      }
      else if(s[i]=="C")
      {
        if(j%4==3)
        {
          j++;
        }
      }
      else if(s[i]=="?")
      {
        j++;
      }
      else{
        j = 0;
      }
    }
  }
}
