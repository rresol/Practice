#include<iostream>
#include<string>

using namespace std;


int recursive(string s1, string s2, int s1len, int s2len)
{
  if(!s1len || !s2len)
    return 0;


  int result;
  if(s1[s1len-1]==s2[s2len-1])
  {
      result = recursive(s1, s2, s1len-1, s2len-1)+1;
  }
  else
  {
    result = max(recursive(s1,s2,s1len-1,s2len),recursive(s1,s2,s1len,s2len-1));
  }
  return result;
}

int bottomUp(string s1, string s2)
{
  int s1len = s1.size();
  int s2len = s2.size();
  int result[s1len+1][s2len+1];
  for(int i=0;i<=s1len;i++)
  {
    for(int j =0; j<= s2len;j++)
    {
      if((!i)||(!j))
      {
        result[i][j] =0;
      }
      else
      {
        if(s1[i-1]==s2[j-1])
        {
          result[i][j] = 1 + result[i-1][j-1];
        }
        else{
          result[i][j] = max(result[i][j-1],result[i-1][j]);
        }
      }
    }
  }
  return result[s1len][s2len];
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int s1len;
    int s2len;
    cin>>s1len>>s2len;
  string s1;
  string s2;
  cin>>s1;
  cin>>s2;
  cout<<recursive(s1,s2,s1.size(), s2.size())<<endl;
  cout<<bottomUp(s1,s2)<<endl;}
  return 0;
}
