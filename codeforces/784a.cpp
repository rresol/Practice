#include<bits/stdc++.h>
using namespace std;


int BIT[100000];
void initializeBIT(int box[], int n)
{
  int i,k;
  memset(BIT,0,sizeof(BIT));
  for(int i=1;i<n;i++)
  {
    int value_to_added = box[i-1];
    k =i;
    while(k<=n)
    {
      BIT[k] += value_to_added;
      k+= (k&(-k));
    }
  }
}

int query(int n)
{
  int ans =0;
  int index_till = R+1;
  while(index_till>0)
  {
    ans += BIT[index_till];
    index_till -= (index_till & (-index_till));
  }
  return ans;
}

void update(int index, int value, int n)
{
  int index_to_modify = index+1;
  while(index_to_modify <= n)
  {
    BIT[index_to_modify] += value;
    index_to_modify += (index_to_modify & (-index_to_modify));
  }
}
