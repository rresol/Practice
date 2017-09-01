#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  ios_base::sync_with_stdio(false);
  cin>>n;
  stack<int>a;
  priority_queue<int, vector<int>, greater<int> >pq;
  n = 2*n;
  int cou =0;
  while(n--)
  {
    string op;
    int b;
    cin>>op;
    if(op.compare("add")==0)
    {
      cin>>b;
      a.push(b);
      pq.push(b);
    }
    else{
      if(a.empty())
      {
        pq.pop();
        continue;
      }
      if(pq.top()!=(a.top()))
      {
        //cout<<pq.top()<<" "<<a.top()<<endl;
        cou++;
        pq.pop();
        while(!a.empty()){
          a.pop();
        }
      }
      else{  //a.pop_back();
      pq.pop();
      a.pop();
    }
    }

  }
  cout<<cou<<endl;
}
