#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int length = (n*m)/k;
  vector<vector<int> >ans[k+1];
  int indexX = 1;
  int indexY = 1;

  vector<int>a;
  int temp =length;
  int temp1 = k;
  int j =0;
  int counter =0;
  while(k--)
  {
    a.clear();
    if(!k)
    {
      length= ((n*m)-(counter*length));
    }
    a.push_back(length);
    for(int i=0;i<length;i++)
    {
      if(indexY>m)
      {
        indexY = m  ;
        indexX++;
      }
      if(indexY<1)
      {
        indexY = 1;
        indexX++;
      }

      if(indexX%2!=0 && indexX<=n){

      a.push_back(indexX);
      a.push_back(indexY);
      //cout<<indexX<<" "<<indexY<<endl;
      indexY++;
    }
    else
    {
      if(indexX<=n){
      a.push_back(indexX);
      a.push_back(indexY);

      //cout<<indexX<<" "<<indexY<<endl;
      indexY--;}
    }
    }


    for(int i=0;i<a.size();i++)
    {
      printf("%d%c",a[i], (i!=(a.size()-1))?' ':'\n' );
    }
    counter++;
  }
  // for(int i=0;i<temp;i++)
  // {
  //   for(int l=0;l<ans[0].size();l++)
  //   {
  //     cout<<ans[0][l]<<endl;
  //   }
  //   cout<<endl;
  // }
  return 0;
}
