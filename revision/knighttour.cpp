#include<bits/stdc++.h>
using namespace std;
int rMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
int cMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
int sol[8][8];

bool isSafe(int x, int y, int sol[8][8])
{
    return ( x >= 0 && x < 8 && y >= 0 &&
             y < 8 && sol[x][y] == -1);
}

int ktUtil(int x, int y, int movei)
{
  int k, next_x, next_y;
  if(movei==64)
  {
    return true;
  }
  for(k=0;k<8;k++)
  {
    next_x = x + rMove[k];
    next_y = y + cMove[k];

  if(isSafe(next_x, next_y, sol))
  {
    sol[next_x][next_y] = movei;
    if(ktUtil(next_x,next_y,movei+1)==true)
    {
      return true;
    }
    else
    {
      sol[next_x][next_y] = -1;
    }
  }
}
  return false;
}

int kt()
{
  for (int x = 0; x < 8; x++)
        for (int y = 0; y < 8; y++)
            sol[x][y] = -1;

  sol[0][0] = 0;
  if(ktUtil(0,0,1)==false)
  {
    cout<<"Solution DNE"<<endl;
    return 0;
  }
  else
  {
    for(int i=0;i<8;i++)
    {
      for(int j=0;j<8;j++)
      {
        cout<<sol[i][j]<<"  ";
      }
      cout<<endl;
    }
  }
}





int main()
{
  kt();
}
