#include<bits/stdc++.h>
using namespace std;
int main()
{

  long long int k;
  cin>>k;
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  long long int n = s.length();
  //for(int i=0;i<n.size();n++)
  long long int sum = k;
  long long int index=n;
  for(long long int i=n-1;i>=0;i--)
  {
    if(sum<0)
    {
      //sum = fabs(sum);
      index = i;
      break;
    }
   sum -=(s[i]-'0');
  }
  //cout<<sum<<endl;
  long long int cou =0;
  for(int i=0;i<n;i++)
  {
    if(sum>0)
    {
      cou++;
      sum = (sum-(9-(s[i]-'0')));
    }
    else{
      break;
    }
  }
  cout<<cou<<endl;
}
