#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int q;
  cin>>q;
  while(q--)
  {
    int m;
    cin>>m;
    char c;
    cin>>c;
    int len = s.size();
    vector<int>prefix(len,0);
    vector<int>suffix(len);
    vector<int>prev(len,0);
    if(s[0]==c)
    {
      prefix[0]=1;
      prev[0] = 1;
    }

    for(int i=1;i<len;i++)
    {
      if(s[i]==c)
      {
        prefix[i]=1;
        prev[i]  = 1;
        prev[i]+=prev[i-1];
      }
      else{
        prev[i] = 0;
      }
      prefix[i]+=prefix[i-1];
    }

    if(s[len-1]==c)suffix[len-1]=1;
    for(int i=len-2;i>=0;i--)
    {
      if(s[i]==c)
      {
        suffix[i]=1;
        suffix[i]+=suffix[i+1];
      }
      else
      {
        suffix[i] =0;
      }
    }
    for(int i=0;i<len;i++)
    {
      cout<<suffix[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<len;i++)
    {
      cout<<prev[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<len;i++)
    {
      cout<<prefix[i]<<" ";
    }
    cout<<endl;
    int max_len = 0;
    int ans =0;
    int first;
    int last;
    for(int i=0;i<(len-m+1);i++)
    {
      int to_add=0;
      if(i!=0)
        to_add = prev[i-1];
      ans = m;
      first = i-1;
      last  = i+m-1;
      last>(len-1)?(len-1):last;
      int curr_len = m;
      int prev_len = 0;
      while((last!=first)&&(curr_len!=prev_len))
      {
        prev_len = curr_len;

        if(i==0)
        {
          if(prefix[last]!=0)
          {
            cout<<curr_len<<" "<<prefix[last]<<endl;
            curr_len+=prefix[last];

            first = last;
            last += prefix[last];
            last>(len-1)?(len-1):last;
            first>(len-1)?(len-1):first;
          }
          else{
            break;
          }
        }
        else
        {
          if((prefix[last]-prefix[first])!=0)
          {
            int v =prefix[last]-prefix[first];
            cout<<"-------------------------"<<endl;
            cout<<curr_len<<" "<<v<<endl;
            cout<<"+++++++++++++++++++++++++"<<endl;
            curr_len+= (v);
            first = last;
            first>(len-1)?(len-1):first;
            first<0?0:first;
            last +=(v);
            last>(len-1)?(len-1):last;
          }
          else{
            break;
          }
        }
        curr_len<=len?curr_len:len;
        cout<<curr_len<<" "<<prev_len<<endl;
      }
      if(last!=(len-1))
        curr_len += suffix[last+1];
      curr_len+=to_add;
      curr_len<=len?curr_len:len;
      max_len = max(max_len,curr_len);
    }
    cout<<max_len<<endl;
  }
}
