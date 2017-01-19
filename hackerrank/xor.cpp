#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x[10][10][10]={0};
  int count =0;
  FILE *fp;
  fp = fopen("output.txt","w");
	while(count<700) {
		int a = (rand() % 10) ;
		int b = (rand() % 10) ;
    int c = (rand() % 10) ;
    if(!x[a][b][c])
    {
      x[a][b][c]  =1;
      count++;
    }

	}
  int cou=0;
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      for(int k=0;k<10;k++)
      {
        if(x[i][j][k]){
          //printf("%f %f %f\n",(i+0.5),(j+0.5),(k+0.5));
        cout<<(i+0.5)<<" "<<(j+0.5)<<" "<<(k+0.5)<<endl;
        fprintf(fp,"%s %lf %lf %lf\n","AR",i+0.5,j+0.5,k+0.5);
      cou++;}
        else
        {
        //  cout<<0<<" "<<0<<" "<<0<<endl;
        }
      }
    }
  }
  cout<<"Total points generated"<<" "<<cou<<endl;
  fclose(fp);
	return 0;
}
