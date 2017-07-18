#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int ugly[n];

  ugly[0] = 1;

  int i2,i3,i5;
  i2=i3=i5=0;
  int next_2mult = 2;
  int next_3mult = 3;
  int next_5mult = 5;

 int next_ugly_no=1;
  for(int i=1;i<n;i++)
  {
    next_ugly_no = min(next_2mult,min(next_3mult,next_5mult));
    ugly[i] = next_ugly_no;
    if(next_ugly_no == next_2mult)
    {
      i2++;
      next_2mult = ugly[i2]*2;

    }
    if(next_ugly_no == next_3mult)
    {
      i3++;
      next_3mult = ugly[i3]*3;
    }
    if(next_ugly_no == next_5mult)
    {
      i5++;
      next_5mult = ugly[i5]*5;
    }
    cout<<next_2mult<<" "<<next_3mult<<"  "<<next_5mult<<"  "<<endl;
    cout<<ugly[i]<<endl;
  }
  cout<<ugly[n-1]<<endl;

}
