#include <cstdio>      /* printf */
#include <cmath>
#include<iostream>     /* tan */
using namespace std;
#define PI 1
int main ()
{
  //cout<<tan(45*3.14/180)<<endl;
  float a[9];
  float sum1 =0;
  float sum2 =0;
  //for(int i:x);
  for(int i=0;i<=8;i++)
  {
    a[i] = exp(((i*0.1))*tan(((i*0.1))*PI / 1));
    if(i>=1&&i<=7)
    {
      a[i]*=2;
    }
    sum1+= a[i];
    if(i>=1&&i<=7)
    {
      if(i%2)
      {
        a[i]*=2;
      }

    }
    sum2+=a[i];
  }
  sum1 = sum1*(0.1/2);
  sum2 = sum2*(0.1/3);
  cout<<"Calculating via trapeziodal rule for function 1: "<<sum1<<endl;
  cout<<"Calculating via simpsons rule for function 1: "<<sum2<<endl;
  sum1 =0;
  sum2 =0;
  //for(int i:x);
  for(int i=0;i<=8;i++)
  {
    a[i] = log((i*(0.1))+1) + sin((2*(0.1)*i*PI) / 1);
    if(i>=1&&i<=7)
    {
      a[i]*=2;
    }
    sum1+= a[i];
    if(i>=1&&i<=7)
    {
      if(i%2)
      {
        a[i]*=2;
      }

    }
    sum2+=a[i];
  }
  sum1 = sum1*(0.1/2);
  sum2 = sum2*(0.1/3);
  cout<<"Calculating via trapeziodal rule for function 2: "<<sum1<<endl;
  cout<<"Calculating via simpsons rule for function 2: "<<sum2<<endl;


  return 0;
}
