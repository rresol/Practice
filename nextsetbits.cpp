#include<iostream>
using namespace std;

typedef unsigned int uint_t;

uint_t snoob(uint_t x)
{
  uint_t rightone;
  uint_t nextHigherOneBit;
  uint_t rightonesPattern;

  uint_t next = 0;

  if(x)
  {
    rightone  = x & -(signed)x;
    nextHigherOneBit = x + rightone;
    rightonesPattern = x ^ nextHigherOneBit;
    rightonesPattern = rightonesPattern / rightone;
    rightonesPattern >>=2;
    next = nextHigherOneBit | rightonesPattern;
  }
  return next;
}


int main()
{
  int x;
  cin>>x;
  cout<<snoob(x);
  //getchar();
  return 0;
}
