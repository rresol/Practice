#include<bits/stdc++.h>
using namespace std;
int tot=0;
int min(int a, int b);
int no_of_eleme;
// Returns value of Binomial Coefficient C(n, k)
int fact(int n)
{
  if(n<=0)
  {
    return 1;
  }
  return n*fact(n-1);
}
int binomialCoeff(int n, int k)
{
    int C[n+1][k+1];
    int i, j;

    // Caculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previosly stored values
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][k];
}

// A utility function to return minimum of two integers
int min(int a, int b)
{
    return (a<b)? a: b;
}
int solve(int a[], int n, int s1, int s2,int cou1, int cou2)
{
  if(n<0)
  {
    if(s1>s2)
    {
      if(cou1==no_of_eleme)
      {
        tot+= fact(cou1);
      }
      else
      {
      tot+= binomialCoeff(no_of_eleme,cou1);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return solve(a,n-1,s1+a[n],s2,cou1+1,cou2) + solve(a,n-1,s1,s2+a[n],cou1,cou2+1);
}


int main()
{
  int n;
  cin>>n;
  int a[n];
  no_of_eleme = n;
  int s1=0,s2 =0;
  int sum =0;
  int cou1 =0;
  int cou2 = 0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+= a[i];
  }
  int res = solve(a,n-1,s1,s2,cou1,cou2);
  cout<<tot<<" "<<sum<<endl;
  if(sum<res)
  {
    cout<<"We will win!"<<endl;
  }
  else{
    cout<<"Got no way out!"<<endl;
  }

}
