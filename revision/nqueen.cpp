#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isSafe(int board[N][N],int row,int col)
{
  for(int i=0;i<col;i++)
  {
    if(board[row][i])
      return false;
  }
  for(int i = row, j = col; i>=0 && j>=0; i--, j--)
  {
    if(board[i][j])
      return false;
  }
  for(int i = row, j = col; i<N && j>=0; i++, j--)
  {
    if(board[i][j])
      return false;
  }
  return true;
}


bool nqutil(int board[][N], int col)
{
  if(col>=N)
    return true;
  for(int i=0;i<N;i++)
  {
    if(isSafe(board, i, col))
    {
      board[i][col] = 1;
      if(nqutil(board,col+1)==true)
      {
        return true;
      }
      else
      {
        board[i][col] = 0;
      }
    }
  }
  return false;
}

int nq()
{
  int board[N][N]={ {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
  if(nqutil(board, 0)==false)
    cout<<"DNE"<<endl;
  else{
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }
  }
}


int main()
{
  nq();
}
