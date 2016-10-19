#include<iostream>
using namespace std;

int bottomUp(int n)
{
  int mobile[n][10];
  int i,j;
  for(i=0;i<10;i++)
  {
    mobile[0][i] =1;
  }
  for(i=1;i<n;i++)
  {
    for(j=0;j<10;j++)
    {
      if(j==0)
        mobile[i][j] = mobile[i-1][0] + mobile[i-1][8];

      if(j==1)
        mobile[i][j] = mobile[i-1][1] + mobile[i-1][2] + mobile[i-1][4];

      if(j==2)
        mobile[i][j] = mobile[i-1][2] + mobile[i-1][1] + mobile[i-1][3] + mobile[i-1][5];

      if(j==3)
        mobile[i][j] = mobile[i-1][3] + mobile[i-1][2] + mobile[i-1][6];

      if(j==4)
        mobile[i][j] = mobile[i-1][4] +  mobile[i-1][1] + mobile[i-1][5] + mobile[i-1][7];


      if(j==5)
        mobile[i][j] = mobile[i-1][5] + mobile[i-1][2] + mobile[i-1][4] + mobile[i-1][6]  + mobile[i-1][8];

      if(j==6)
        mobile[i][j] = mobile[i-1][6] + mobile[i-1][3] + mobile[i-1][5] + mobile[i-1][9];

      if(j==7)
        mobile[i][j] = mobile[i-1][7] + mobile[i-1][4] + mobile[i-1][8] ;

      if(j==8)
        mobile[i][j] = mobile[i-1][8] + mobile[i-1][0] + mobile[i-1][5] + mobile[i-1][7] + mobile[i-1][9];

        if(j==9)
          mobile[i][j] = mobile[i-1][9] + mobile[i-1][6] + mobile[i-1][8];
    }
  }
  int sum =0;
  for(i=0;i<10;i++)
    sum += mobile[n-1][i];

  cout<<sum<<endl;
  return sum;
}

int main()
{
  int n;
  cin>>n;
  bottomUp(n);
}
