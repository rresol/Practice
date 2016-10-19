#include<iostream>
#include <vector>
#include<climits>
using namespace std;

int recursive(vector<int>size, int start, int end)
{
  if(start==(end))
    return 0;
  int small = INT_MAX,curr;
  for(int i=start;i<end;i++)
  {
     curr = recursive(size,start,i) + recursive(size,i+1,end) + size[start-1]*size[end]*size[i];
     if(small>curr)
      small =curr;
  }
  cout<<small<<"start"<<start<<"end"<<end<<endl;
  return small;
}

int bottomUp(vector<int>size, int n)
{
  int m[n][n];
  int i,j,k,L,q;
  for(i=1;i<n;i++)
    m[i][i]=0;
  for(L=2;L<n;L++)
  {
    for(i=1;i<n-L+1;i++)
    {
      j = i+L-1;
      m[i][j] = INT_MAX;
      for(k=i;k<=j-1;k++)
      {
        q = m[i][k] + m[k+1][j] + size[i-1]*size[k]*size[j];
        if(q<m[i][j])
          m[i][j] = q;
      }
    }
  }
  return m[1][n-1];
}

int main()
{
  vector<int>s;
  int i,n,a;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
    s.push_back(a);
  }
  int length = s.size();
  int result = recursive(s, 1, length-1);
  int result1 = bottomUp(s,length);
  cout<<result<<"_____"<<result1<<endl;
}
