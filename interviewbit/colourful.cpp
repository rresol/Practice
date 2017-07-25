#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
  char s[20];
  sprintf(s,"%d",n);
  int len = strlen(s);
  map<long long, bool>hash;
  for(int i = 0; i < len; ++i) {

   long long mul = 1;

   for(int j = i; j < len; ++j) {

     mul *= (long long)(s[j] - '0');
           if(hash.find(mul) != hash.end()) return 0;
           hash[mul] = true;
       }
   }
   return 1;
}
int main()
{
  int n;
  cin>>n;
  if(solve(n))
  {
    cout<<"YES"<<endl;

  }
  else
  {
    cout<<"NO"<<endl;
  }
}
