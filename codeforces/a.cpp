#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l;
  cin>>l;
  string s;
  cin>>s;
  vector<int>ans;
  int count =0;
  bool flag ;
  int no_of_zeros = 0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='1')
    {
      if(flag==true)
      {
        for(int i=0;i<no_of_zeros;i++)
        {
          ans.push_back(0);
        }
        flag = false;
        no_of_zeros  = 0;
      }
      flag = false;
      count++;
    }
    else{
      if(!flag){
      ans.push_back(count);
      flag = true;
      count =0;}
      else{

        no_of_zeros ++;
      }
    }
  }
  if(!flag)
  {
    ans.push_back(count);
  }
  else
  {
    for(int i=0;i<no_of_zeros;i++)
    {
      ans.push_back(0);
    }
  }
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i];
  }
}
