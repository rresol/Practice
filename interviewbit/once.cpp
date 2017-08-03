#include<bits/stdc++.h>
using namespace std;

#define N 32

int getSingle(int arr[], int n)
{
  int result =0;
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<n;j++)
    {
      sum+=((1<<i)&&arr[j]);
    }
    if(sum%3)
      results |= (1<<i);
  }
  return result;
}

int main()
{
  int
}
