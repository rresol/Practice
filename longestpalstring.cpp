#include<iostream>
using namespace std;

int checkpal(string s)
{
  for(int i=0;i<s.length()/2;i++)
  {
    if(s[i]!=s[s.length()-i-1])
      return 0;
  }
  return 1;
}

int main(){
  string s;
  cin>>s;

}
