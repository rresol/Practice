#include<bits/stdc++.h>
using namespace std;
int arrival[26];
int departure[26];
int main()
{
  memset(arrival,-1,sizeof(arrival));
  memset(departure,-1,sizeof(departure));
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;

  for(int i=0;i<s.size();i++)
  {
    if(arrival[s[i]-'A']==-1)
    {
      arrival[s[i]-'A'] = i;
    }
  }
  for(int i=s.size()-1;i>=0;i--)
  {
    if(departure[s[i]-'A']==-1)
    {
      departure[s[i]-'A'] = i;
    }
  }
  vector<pair<int,int> >schedule;
    for(int i=0;i<26;i++)
    {
      if(arrival[i]!=-1){
        schedule.push_back(make_pair(arrival[i],departure[i]));}
    }
    sort(schedule.begin(),schedule.end());
    int total=0;
    priority_queue<int, vector<int>, greater<int> >pq;
    //pq.clear();
    for(int i=0;i<schedule.size();i++)
    {     //cout<<schedule[i].first<<" "<<schedule[i].second<<endl;
          if(pq.empty())
        {
          //cout<<"step 1"<<endl;
            total++;
        }
        else
        {
          //cout<<"step2"<<endl;
            int v = pq.top();
            //cout<<v<<endl;
            if(v<=schedule[i].first)
            {
                pq.pop();

            }
            else
            {

                total++;
            }
        }

        pq.push(schedule[i].second);
    }
    //cout<<total<<endl;
    if(total>k)
    {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
}
