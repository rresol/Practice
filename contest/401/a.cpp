#include<iostream>
using namespace std;
int main()
{
  int a[6][3];
  a[0][0] = 0;
  a[0][1] = 1;
  a[0][2] = 2;
  for(int i=1;i<6;i++)
  {
    if(i%2)
    {
      int temp = a[i-1][1];
      a[i][1] = a[i-1][0];
      a[i][0] = temp;
      a[i][2]  = a[i-1][2];
    }
    else
    {
      int temp = a[i-1][1];
      a[i][1] = a[i-1][2];
      a[i][2] = temp;
      a[i][0] = a[i-1][0];
    }
    //cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
  }
  long long int n,x;
  cin>>n;
  cin>>x;
  long long rem = n%6;
  cout<<a[rem][x]<<endl;
  return 0;
}
