// #include<iostream>
// #define CHAR_BIT 8
// using namespace std;
//
// int min_3(int x, int y, int z)
// {
//   int r = y + ((x-y)&((x-y)>>(sizeof(int)*CHAR_BIT-1)));
//   int s = z + ((x-z)&((x-z)>>(sizeof(int)*CHAR_BIT-1)));
//   return  r + ((r-s)&((r-s)>>(sizeof(int)*CHAR_BIT-1)));
//
// }
//
// int div_method(int x, int y, int z)
// {
//   return (-((1>>(x/y)) & (1>>(x/z))) & x)  | (-((1>>(z/x)) & (1>>(z/y))) & z) | (-((1>>(y/x)) & (1>>(y/z))) & y);
// }
//
// //(-(((1>>(x/y)) & (1>>(x/z)))<<31) & 45)
//
// int main(){
//   int x,y,z;
//   cin>>x>>y>>z;
//   //cout<<min_3(x,y,z)<<endl;
//   cout<<div_method(x,y,z);
//   return 0;
// }

// See mthod 2 of http://www.geeksforgeeks.org/archives/2643
#include<iostream>
#include<cstdio>
#define CHAR_BIT 8
using namespace std;
/*Function to find minimum of x and y*/
int min(int x, int y)
{
  return  y + ((x - y) & ((x - y) >>
            (sizeof(int) * CHAR_BIT - 1)));
}

/* Function to find minimum of 3 numbers x, y and z*/
int smallest(int x, int y, int z)
{
    return min(x, min(y, z));
}

int main()
{
   int x , y , z ;
   cin>>x>>y>>z;
   printf("Minimum of 3 numbers is %d", smallest(x, y, z));
   return 0;
}
