#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void swap(char *x, char *y )
{
  char temp = *x;
  *x = *y;
  *y  = temp;
  return;
}

void permute(string s, int l ,int r )
{
  if(l==r){
    cout<<s<<endl;
    return;}
  char temp;
  for(int i=l;i<=r;i++)
  {
    if(s[l]!=s[i] || i==l){
    swap(s[l],s[i]);
    permute(s,l+1,r);
    swap(s[l],s[i]);}
  }
}


int main()
{
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  permute(s,0,s.length()-1);

}
