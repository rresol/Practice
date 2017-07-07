#include<bits/stdc++.h>
using namespace std;
typedef struct diet{
  int vit;
  int car;
  int fat;
  int prot;
}diet;

bool solve(diet a[], int n, int vit, int car, int fat, int prot)
{
  if(n<0)
  {
    return false;
  }
  if(!vit&&!car&&!fat&&!prot)
  {
    return true;
  }
  if(vit<0||car<0||fat<0||prot<0)
  {
    return false;

  }
  return (solve(a,n-1,vit-a[n].vit,car-a[n].car,fat-a[n].fat,prot-a[n].prot) || solve(a,n,vit,car,fat,prot));
}

int main()
{
  int vit,car,fat,prot;
  int n;
  cin>>vit>>car>>fat>>prot;
  cin>>n;
  diet a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i].vit;
    cin>>a[i].car;
    cin>>a[i].fat;
    cin>>a[i].prot;
  }

  if(solve(a,n-1,vit,car,fat,prot))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}
