#include<iostream>
#include<map>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  map<string,string>mediaType;
  while(n--)
  {
    string c, d;
    cin>>c>>d;
    mediaType[c]=d;
  }
  while(q--){
  string a;
  cin>>a;
  string b="";
  int j;
  bool flag = false;
  for(j=0;j<a.size();j++)
  {
    if(a[a.size()-j-1]=='.')
    {
      flag = true;
      break;
    }

    b = a[a.size()-1-j] + b;

  }
  string c = b;
  if(mediaType.find(c)==mediaType.end() || !flag)
  {
    cout<<"unknown"<<endl;
  }
  else
  {
    cout<<mediaType[c]<<endl;
  }
}}
