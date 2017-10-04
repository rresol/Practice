#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k;
  cin>>n>>k;
  long long tens=0;
  long long temp1 = n;
  long long temp2 = n;
  while(temp1%10==0)
  {
    tens++;
    temp1 = temp1/10;
  }
  long long temp3 = n;
  if(tens>=k){
    cout<<n<<endl;
    return 0;
  }
  long long fives =0;
  while(temp2%5==0)
  {
    fives++;
    temp2 = temp2/5;
  }
  long long twos =0;
  while(temp3%2==0)
  {
    twos++;
    temp3 = temp3/2;
  }
  twos = twos -tens;
  fives = fives-tens;
  //long long rem = fives-tens;
  long long ans;

    long long v = k-tens;
    //cout<<v<<endl;
    long long rem;
    rem = min(fives,v);
  ans = (1<<rem);
  //cout<<rem<<endl;
  tens+=rem;
  //cout<<tens<<endl;

  if(twos){
   v = k-tens;
  // cout<<v<<endl;
   //rem = twos-tens;
   rem  = min(twos,v);
   for(int i=0;i<rem;i++)
   {
     ans*=5;
   }
   tens+=rem;}
  while(tens<k)
  {
    ans*=10;
    tens++;
  }
  cout<<(ans*n*1LL)<<endl;
  return 0;
}
