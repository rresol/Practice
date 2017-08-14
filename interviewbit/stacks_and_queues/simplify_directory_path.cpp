#include<bits/stdc++.h>
using namespace std;
string solve(string s)
{
  stack<string>s1;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='/')
        {
          //cout<<"step1"<<endl;
          if(ans==".")
          {
            ans="";
            continue;
          }
          else if(ans=="..")
          {
            //cout<<ans;
            ans="";
            //cout<<s1.top();
            s1.pop();
          }
          else if(!ans.empty())
          {
            ///cout<<ans<<endl;
            s1.push(ans);
            ans = "";
          }
        }
      else
          ans+=s[i];
      //cout<<ans<<endl;
    }
    //cout<<s1.top()<<endl;
    if(ans==".")
          {
            cout<<"step1"<<endl;
            ans="";
            //continue;
          }
          else if(ans=="..")
          {
            cout<<"step2"<<endl;
            ans="";
            s1.pop();
          }
          else if(!ans.empty())
          {
            cout<<"step3"<<endl;
            s1.push(ans);
            ans = "";
          }
    ans = "";
    while(!s1.empty())
    {
      cout<<s1.top()<<endl;
      string val = s1.top();
      cout<<val<<endl;
      ans= val+ans;
      ans="/"+ans;
      s1.pop();

    }
    return ans;
}

int main()
{
  string A;
  cin>>A;
  cout<<solve(A);

}
