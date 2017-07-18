#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005
#define k 8

void floodfill(int matrix[k][k],int x, int y, int prevc, int newc)
{
  if(x<0||x>=k || y<0 || y>=k)
    return;
  //cout<<matrix[x][y]<<endl;
  if(matrix[x][y]!=prevc)
    return;
  matrix[x][y] = newc;
  floodfill(matrix, x+1,y,prevc,newc);
  floodfill(matrix, x-1,y,prevc,newc);
  floodfill(matrix, x,y+1,prevc,newc);
  floodfill(matrix, x,y-1,prevc,newc);

}

int main()
{
  int n,m;
  cin>>n>>m;
  int matrix[k][k];
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
      cin>>matrix[i][j];
    }
  }
  int srcx, srcy;
  int new_color;
  cin>>srcx>>srcy>>new_color;
  floodfill(matrix,srcx,srcy,matrix[srcx][srcy],new_color);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
