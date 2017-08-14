#include<bits/stdc++.h>
using namespace std;

int jump(vector<int> &A) {

    int n = A.size();
    int d[n];
    if(n<=1)
      return 1;
    if(A[0]==0) return -1;
    int jump =1;
    int steps= a[0];
    int maxreach = a[0];
    for(int i=1;i<n;i++)
    {
      if(maxreach==n-1)
        return jump;

      steps--;
      maxreach = max(maxreach, i+A[i]);
      if(steps==0){
        jump++;
        if(maxreach<=i)
        {return -1;}
        steps= maxreach-i;
      }
    }
    return -1;
}


int main()
{


  int t;
  cin>>t;
  while(t--)
{  int n;
  cin>>n;
  vector<int>a(n);
  for(int  i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<jump(a)<<endl;}
}
