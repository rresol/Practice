#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum=0;
  for(int i=0;i<=10000000000;i++)
  {
    double x = ((double) rand() / (RAND_MAX)) + 1;
    double y = ((double) rand() / (RAND_MAX)) + 1;
    x -=1;
    y-=1;
    if(((x*x + y*y) <=1.0))
    {
      sum++;
    }
    if(i==10000)
    {
      printf("10000----->%f\n",4*double(sum)/i );
    }
    if(i==100000)
    {
      printf("10000----->%f\n",4*double(sum)/i );
    }
    if(i==1000000)
    {
      printf("10000----->%f\n",4*double(sum)/i );
    }
    if(i==10000000)
    {
      printf("10000----->%f\n",4*double(sum)/i );
    }
    if(i==100000000)
    {
      printf("10000----->%f\n",4*double(sum)/i );
    }
    if(i==10000000000)
    {
      printf("10000----->%f\n",4*double(sum)/i );
    }
  }
}
