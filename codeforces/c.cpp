#include<bits/stdc++.h>
using namespace std;
vector<vector<string> >findLadders(string start, string end, vector<string> &dict) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    queue<pair<string,int> >q;
    q.push(make_pair(start,1));
    //map<string,int>m;
    //m[start] = true;

    map<string,string>parent;
    parent[start]="";
    //parent[start] = '-1';
    vector<vector<string> >result;
    vector<string>ans;

    if(start.compare(end)==0){
        ans.push_back(start);
        result.push_back(ans);
        return result;
    }
    //vector<vector<string> >result;
    int length = INT_MAX;
    while(!q.empty())
    {
        string s = q.front().first;
        int level = q.front().second;
        q.pop();
        int cou =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=end[i])cou++;
        }
        if((level+1)>length)continue;
        if(cou==1)
        {
            vector<string>ans;
            ans.push_back(end);
            ans.push_back(s);
            string r = parent[s];
            while(!r.empty())
            {
                ans.push_back(r);
                r = parent[r];
            }
            //ans.push_back(start);
            length = level+1;
            reverse(ans.begin(),ans.end());
            result.push_back(ans);
            continue;
        }
        for(int i=0;i<dict.size();i++)
        {
            int cou =0;
            if(parent.find(dict[i])==parent.end()){
            for(int j=0;j<s.size();j++)
            {
                if(s[j]!=dict[i][j])cou++;
            }
            if(cou==1){
                q.push(make_pair(dict[i],level+1));
                //m[dict[i]]=1;
                parent[dict[i]] = s;
            }}
        }
    }
    return result;
}
int main()
{
  string start;
  string end;
  cin>>start;
  cin>>end;
  int n ;
  cin>>n;
  vector<string>dict;
  for(int i=0;i<n;i++)
  {
    string x;
    cin>>x;
    dict.push_back(x);
  }
  vector<vector<string> >ans = findLadders(start,end,dict);
  for(int i=0;i<ans.size();i++)
  {
    for(int j=0;j<ans[i].size();j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}
