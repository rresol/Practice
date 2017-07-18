#include<bits/stdc++.h>
using namespace std;
double funct1(double x)
{
  return exp(x*tan(x));
}

double funct2(double x)
{
  return (log(x+1) + sin(2*x));
}

int main()
{
  double a, b;
  double h ;
  cin>>a>>b;
  cin>>h;
  double sum=0.0;
  double sum2 = 0.0;
  for(int i=0;i<=(b-a)/h;i++)
  {
    cout<<i<<endl;
    if(i==0||i==(b-a)/h)
    {

      sum+= funct1(a+i*h);
      sum2+= funct2(b+i*h);
    }
    else{


        sum+= (2*funct1(a+i*h));
        sum2+= (2*funct2(a+i*h));

    }
  }
  cout<<sum*(h/2)<<"  "<<sum2*(h/2)<<endl;
  sum =0;
  sum2 = 0.0;
  for(int i=0;i<=(b-a)/h;i++)
  {
    cout<<i<<endl;
    if(i==0||i==(b-a)/h)
    {

      sum+= funct1(a+i*h);
      sum2+= funct2(b+i*h);
    }
    else{

        if(i%2==0){
        sum+= (2*funct1(a+i*h));
        sum2+= (2*funct2(a+i*h));}
        else{
          sum+= (4*funct1(a+i*h));
          sum2+= (4*funct2(a+i*h));
        }

    }
  }
  cout<<(h/3.0)*sum<<"  "<<(h/3.0)*sum2<<endl;
  return 0;
}
