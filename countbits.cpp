#include<iostream>
using namespace std;
int main()
{
  int bitcount[1001];
  long sumcount[1001];
  bitcount[1] =1;
  sumcount[1] = 1;
  for(int i=2;i<1001;i++)
  {
    int temp;
    if(!(i%2))
    {
      if(!(i&(i-1)))
      {
        bitcount[i] = 1;
        temp = i;


      }
      else
      {
        bitcount[i] = bitcount[temp]+ bitcount[i - temp];
      }
    }
    else
    {
      bitcount[i] = bitcount[i-1] + 1;
    }
    sumcount[i] = sumcount[i-1] + bitcount[i];
    //cout<<i<<" "<<sumcount[i]<<" "<<bitcount[i]<<endl;
  }
  int t;
  cin>>t;
  while(t--){

    int n;
    cin>>n;
    cout<<sumcount[n]<<endl;

  }

}
