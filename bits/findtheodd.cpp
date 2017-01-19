#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a,x=0;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      x = x^a;
    }
    cout<<x<<endl;
  }
}
