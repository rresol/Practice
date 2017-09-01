#include<bits/stdc++.h>
using namespace std;
int main()
{
  string t;
  //cin>>t;
  // getline(cin,t);
  // istringstream iss(t);
  // int word;
  // int sum=0;
  // while(iss>>word)
  // {
  //   cout<<word<<endl;
  //   sum+=word;
  // }
  // cout<<sum<<endl;
  string s="";
  do{
    getline(cin,t);
    s+=t;
    s = s+'\n';
  }while(t.length()>0);
  cout<<s<<endl;
}
