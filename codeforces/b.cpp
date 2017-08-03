#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<string>s;
  for(int i=0;i<n;i++)
  {
    string s1;
    cin>>s1;
    s.push_back(s1);
  }
  int ans1=-1;
  int ans2=-1;
  vector<char>c1;
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      if(s[i][j]!=s[i][j-1])
      {
        ans1 = 0;
        break;
      }
    }

    if(ans1==0)
    {
      break;
    }
    c1.push_back(s[i][0]);
  }
  if(ans1!=0)
  {
    //cout<<"1"<<endl;
    map<char,int>m;
    m['R']=0;
    m['G']=0;
    m['B']=0;
    int tot =1;
    vector<int>strips;
    for(int i=0;i<c1.size()-1;i++){
      if(c1[i]=='R')m['R']++;
      if(c1[i]=='G')m['G']++;
      if(c1[i]=='B')m['B']++;
      if(c1[i]==c1[i+1])tot++;
      else{
        strips.push_back(tot);
        tot=1;
      }
    }
    m[c1[c1.size()-1]]++;
    strips.push_back(tot);
    // for(int i=0; i<strips.size(); i++){
    //   cout<<strips[i]<<" ";
    // }
    if(m['R']&&m['G']&&m['B'])
    {
      if(strips.size()==3)
      {
        if(strips[0]==strips[1] && strips[1]==strips[2])
        {
          cout<<"YES"<<endl;
          return 0;
        }
      }
    }
    //cout<<endl;

  }

  c1.clear();
  for(int j=0;j<m;j++)
  {
    for(int i=1;i<n;i++)
    {
      if(s[i][j]!=s[i-1][j])
      {
        ans2 = 0;
        break;
      }
    }

    if(ans2==0)
    {
      break;
    }
    c1.push_back(s[0][j]);
  }
  if(ans2!=0)
  {
    //cout<<"1"<<endl;
    map<char,int>m;
    m['R']=0;
    m['G']=0;
    m['B']=0;
    int tot =1;
    vector<int>strips;
    for(int i=0;i<c1.size()-1;i++){
      if(c1[i]=='R')m['R']++;
      if(c1[i]=='G')m['G']++;
      if(c1[i]=='B')m['B']++;
      if(c1[i]==c1[i+1])tot++;
      else{
        strips.push_back(tot);
        tot=1;
      }
    }
    m[c1[c1.size()-1]]++;
    strips.push_back(tot);
    // for(int i=0; i<strips.size(); i++){
    //   cout<<strips[i]<<" ";
    // }
    // cout<<m['R']<<" "<<m['G']<<m['B']<<endl;
    if(m['R']&&m['G']&&m['B'])
    {
      //cout<<"step1"<<endl;
      if(strips.size()==3)
      {
        //cout<<"step2"<<endl;
        if(strips[0]==strips[1] && strips[1]==strips[2])
        {
          cout<<"YES"<<endl;
          return 0;
        }
      }
    }
    //cout<<endl;

  }

cout<<"NO"<<endl;
return 0;


}
