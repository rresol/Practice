#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    string s;
    scanf("%s\n",&s);
    reverse(s.begin(),s.end());
    long long len = s.length();
    long long int l,r,k;
    long long int i=1;
    long long int z[len];
    z[0] = len;
    l =r =0;
    for(long long int i=1;i<len;i++)
    {
      if(i>r)
      {
        l = r =i;
        while(r< len && s[r-l]==s[r])
          r++;
        z[i] = r-l;
        r--;
      }
      else
      {
        k = i-l;
        if(z[k]<r-i+1)
        {
          z[i]= z[k];
        }
        else
        {
          l = i;
          while(r<len && s[r-l]==s[r])
            r++;
          z[i] = r-l;
          r--;
        }
      }
    }
    if(s[0]==s[len-1])
      {
        z[len-1] = 1;
      }
  else{
          z[len-1] =0;
    }
    long long int n;
  scanf("%lld",&n);
    while(n--)
    {
      long long int x;
      scanf("%lld",&x);
      cout<<z[len-x]<<endl;

    }
  }
}
