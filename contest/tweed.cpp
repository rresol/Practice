#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,i;
    scanf("%d",&n);
    char a[3];
    cin>>a;
    int b;

    int even= 0;
    for(i=0;i<n;i++)
    {
      scanf("%d",&b);
      if((b%2)==0){
        even++;
      }
    }
    if(n==1 && even==1 && strcmp(a,"Dee")==0)
    {

      cout<<"Dee"<<endl;

    }
    else{
      cout<<"Dum"<<endl;
    }

}
return 0;
}
