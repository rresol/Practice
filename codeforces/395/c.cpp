#include<bits/stdc++.h>
using namespace std;
int d[100010],e;
int a[100010],b[100010],c[100010];
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    scanf("%d%d",&a[i],&b[i]);
  }
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&c[i]);
  }
  for(int i=1;i<n;i++)
  {
    if(c[a[i]]!=c[b[i]]){
      d[a[i]]++;
      d[b[i]]++;
      e++;
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(d[i]==e){
      printf("YES\n%d\n",i);
      return 0;
    }
  }
  printf("NO\n");
  return 0;

}
