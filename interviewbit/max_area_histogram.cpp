#include<iostream>
#include<stack>
using namespace std;
int hist[100005];
int solve(int n)
{
  stack<int>s;
  int i=0;
  int area;
  int max_area=0;
  while(i<n)
  {
    if(s.empty() || hist[s.top()]<=hist[i])
    {
      s.push(i++);
    }
    else{
      int v = s.top();
      cout<<v<<endl;
      s.pop();
      area = hist[v]*(s.empty()?i:(i-s.top()-1));
      max_area = max(area,max_area);
    }
  }
  while(!s.empty())
  {
    int v = s.top();
    s.pop();
    //cout<<s.top();
    area = hist[v]*(s.empty()?i:(i-s.top()-1));
    max_area = max(area,max_area);

  }
  return max_area;
}

int main()
{
  int n;
  cin>>n;
  //int hist[n];
  for(int i=0;i<n;i++)
    cin>>hist[i];
  cout<<solve(n);
}
