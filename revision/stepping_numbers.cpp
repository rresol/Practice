#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void steppingNumbersUtil(int n, int m, int num)
{

  queue<int>q;
  q.push(num);
  while(!q.empty())
  {
    int val = q.front();
    q.pop();
    if(val<=m && val>=n)
      {
        cout<<val<<" ";
        ans.push_back(val);
        //cout<<ans[5]<<endl;
    }
    if(num==0 || val>m)
      continue;
    int lastdigit = val%10;
    int stepNumA = val*10 + lastdigit + 1;
    int stepNumB = val*10 + lastdigit - 1;
    if(lastdigit==0)
    {
      q.push(stepNumA);
    }
    else if(lastdigit == 9)
    {
      q.push(stepNumB);
    }
    else{
      q.push(stepNumA);
      q.push(stepNumB);
    }
  }
  return;
}


int steppingNumbers(int n, int m)
{
  for(int i=0;i<=9;i++)
  {
    steppingNumbersUtil(n,m,i);
  }
  cout<<ans.size();
  sort(ans.begin(),ans.end());

  return 0;
}


int main()
{
  int n,m;
  cin>>n>>m;
  steppingNumbers(n,m);
  cout<<endl;
  for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<"   ";

}
