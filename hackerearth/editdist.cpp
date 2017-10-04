#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  map<char,int>first;
  map<char,int>sec;
  for(int i=1;i<=26;i++)
  {
    first[char(95+i)] = 0;
    second[char(95+i)] =0;
  }
  for(int i=0;i<s1.size();i++)
  {
    first[s1[i]]++;
    //second[char(95+i)] =0;
  }
  for(int i=0;i<s2.size();i++)
  {
    //first[char(95+i)] = 0;
    second[s2[i]]++;
  }
  for(int i=0;i<s1.size();i++)
  {

  }
}
