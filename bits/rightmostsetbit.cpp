// #include<iostream>
// using namespace std;
// int main()
// {
//   int a;
//   cin>>a;
//   int counter=0;
//   while(a)
//   {
//     counter++;
//     if(a&1)
//     {
//       break;
//     }
//     a>>=1;
//
//   }
//   cout<<counter<<endl;
// }
#include<bits/stdc++.h>

unsigned int getFirstSetBitPos(int n)
{
   return log2(n&-n)+1;
}

int main()
{
    int n = 8;
    printf("%u", getFirstSetBitPos(n));
    getchar();
    return 0;
}
