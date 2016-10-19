#include<iostream>
using namespace std;

int C[100][100];

int binomialCoeff(int n, int k)
{
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

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int j =1;
    int k =n;
    int ans;
    if(n==1||n==2)
    {
      cout<<n<<endl;
    }
    else{
    while(k>0)
    {
      if(C[(n-2*j)+j][j])
      {
          ans  = C[(n-2*j)+j][j];
      }
      else{
      ans  = binomialCoeff((n-2*j)+j, j);
    }
      j++;
      k = n - (2*j);
    }
    ans +=2;
    if(n%2)
    {
      ans -=1;
    }
    cout<<ans<<endl;}
  }
}
