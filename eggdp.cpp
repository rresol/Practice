#include<bits/stdc++.h>
#include<climits>
using namespace std;

int recursive(int n, int x)
{
  int result;
  if(x==0 || x==1)
    return x;
  if(n==1)
    return x;

  int min = INT_MAX;
  for(int i=1;i<=x;i++)
  {
    result = max(recursive(n-1,i-1),recursive(n,x-i));
    if(result<min)
      min = result;
    //cout<<min<<endl;
  }
  return min+1;
}

int bottomUp(int n, int x)
{
  int result[n+1][x+1];
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=x;j++)
    {
      if(i==0)
      {
        result[i][j] = 0;
      }
      else if(j==0||j==1 || i==1)
      {
        result[i][j] = j;
      }
      else
      {
        result[i][j] = 1+  max(result[i-1][j-1] , result[i][j]);
      }

    }
  }
}

int eggDrop(int n, int k)
{
    // If there are no floors, then no trials needed. OR if there is
    // one floor, one trial needed.
    if (k == 1 || k == 0)
        return k;

    // We need k trials for one egg and k floors
    if (n == 1)
        return k;

    int min = INT_MAX, x, res;

    // Consider all droppings from 1st floor to kth floor and
    // return the minimum of these values plus 1.
    for (x = 1; x <= k; x++)
    {
        res = max(eggDrop(n-1, x-1), eggDrop(n, k-x));
        if (res < min)
            min = res;
    }

    return min + 1;
}

int main()
{
  int n,x;
  cin>>n>>x;
  int result = recursive(n,x);
  cout<<result<<endl;

}
