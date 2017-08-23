#include<bits/stdc++.h>
using namespace std;
#define  ma 10000001
int primes[10000010];
set<long long>ans;
void generatePrime()
{
  for(long long int i=2;i<=10000010;i++)
  {
    if(!primes[i])
    {
      ans.insert(i*i);
      for(int j=i*2;j<=10000010;j+=i)
      {
        primes[j] = true;
      }
    }
  }
}

int  main()
{

  generatePrime();

        long long  n;
    cin>>n;
    while(n--)
    {
      long long  x;
      cin>>x;
      if(ans.find(x)!=ans.end())
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}
