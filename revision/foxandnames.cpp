  #include<bits/stdc++.h>
  using namespace std;
  #define rep(i,n) for(int i=0;i<n;i++)
  #define mem(x,val) memset(x,val,sizeof(x));
  vector<int>alpha[27];
  int main()
  {
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    n--;
    while(n--)
    {
      //cout<<2<<endl;
        string s2;
        cin>>s2;

        rep(i,min(s1.size(),s2.size()))
        {
          //cout<<s2<<endl;
          if(s1[i]!=s2[i])
          {
            //cout<<s1[i]-'a'+1<<"   "<<s2[i]-'a'+1<<endl;
            alpha[s1[i]-'a'+1].push_back(s2[i]-'a'+1);
            break;
          }
          if(i==(min(s1.size(),s2.size())-1))
          {
            if(s1.size()>s2.size())
            {
              cout<<"Impossible";
              return 0;
            }
          }
        }
        s1 =s2;
    }
    //cout<<1<<endl;
    int indegree[27];
    mem(indegree,0);
    for(int i=1;i<=27;i++)
    {

      for(int j=0;j<alpha[i].size();j++)
      {
        indegree[alpha[i][j]]++;
      }
    }
    queue<int>q;
    vector<int>toporder;
    for(int i=1;i<27;i++)
    {

      if(!indegree[i])
        q.push(i);
    }

    // int order[27]={0};
    int cnt=0;
    while(!q.empty()){
      int v = q.front();
      toporder.push_back(v);
      q.pop();
      rep(i,alpha[v].size())
      {
        indegree[alpha[v][i]]--;
        if(!indegree[alpha[v][i]])
        {
          q.push(alpha[v][i]);
        }
        //toporder
      }

      cnt++;
    }
    if(cnt!=26)
    {
      cout<<"Impossible"<<endl;
      return 0;
    }
    rep(i,toporder.size())
      cout<<char(toporder[i]+96);

  }
