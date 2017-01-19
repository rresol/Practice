#include<iostream>
#define n 4
using namespace std;

int ans[4][4] = {1};

int recursive(int a[n][n],int r,int c ){
  if(!a[r][c])
  {
    return 0;
  }
  if(r==0 && c==0)
  {
    return 1;
  }
  if(r<0||c<0)
    return 0;
  ans[r][c] = recursive(a,r-1,c)   || recursive(a,r,c-1 );
  return ans[r][c];
 }

int main()
{
  int maze[4][4]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    recursive(maze,3,3);
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
      cout<<ans[i][j]<<" ";
    cout<<endl;
  }
}
