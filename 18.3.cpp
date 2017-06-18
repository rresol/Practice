#include<vector>
#include<iostream>
#include<queue>
#include<cstdlib>
#include<map>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    queue<int> q;
    q.push(n);
    map<long long int, long long int> level;
    level.insert(make_pair(n,0));
    bool flag = false;
    while(!q.empty())
    {
      int val = q.front();
      q.pop();
      if(val==1)
      {
        cout<<level[val]<<endl;
        flag = true;
      }
      for(int i=1;i<4;i++)
      {
        if((val%i)==0)
        {
          if(i==1)
          {
            if(level.find(val-1)==level.end()){
            q.push(val-1);
            level.insert(make_pair(val-1,level[val] +1));
            if(val-1 ==1)
            {
              cout<<level[val-1]<<endl;
              flag = true;
            }
          }
          }
          else
          {
            if(level.find(val/i)==level.end()){
            q.push(val/i);
            level.insert(make_pair(val/i,level[val] +1));
            if(val/i ==1)
            {
              cout<<level[val/i]<<endl;
              flag = true;
            }
          }

          }
        }
      }
      if(flag)
      {
        break;
      }
    }
  }
}
