#include<iostream>
#include<climits>
using namespace std;

int recursive(int a[],int start, int n)
{

if(a[start]==0)
  return INT_MAX;
if(n==start)
  return 0;
  int minjump = INT_MAX;
    for(int i=1;(i<=a[start])&&(i+start<=n);i++){
    minjump = 1 + min(minjump,recursive(a,start+i,n));
  }
  //cout<<minjump<<endl;
  return minjump;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cout<<recursive(a,0,n-1)<<endl;
}
