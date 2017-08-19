#include<bits/stdc++.h>
using namespace std;

string lcs(string A, string B)
{

    int n  = A.size();
    int m = B.size();
    int ans[n+1][m+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                ans[i][j] = 0;
            }
            else
            {
                if(A[i-1]==B[j-1])
                {
                    ans[i][j] = 1 + ans[i-1][j-1];
                }
                else
                {
                    ans[i][j] = max(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
    }

    // for(int i=0;i<=n;i++)
    // {
    //   for(int j=0;j<=m;j++)
    //   {
    //     cout<<ans[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }

    vector<int>index;
    int i =n;
    int j=m;
    while(i>0 && j>0)
    {
        if(A[i-1]==B[j-1])
        {
          index.push_back(j-1);
          i--;
          j--;
        }
        else if(ans[i-1][j]>ans[i][j-1])i--;
        else j--;
        //cout<<"i"<<endl;
    }
    string rem="";
    sort(index.begin(),index.end());
    j=0;
    cout<<index.size()<<endl;
    for(int i=0;i<B.size();i++)
    {
        //cout<<i<<endl;
        if(!index.empty())
        {if(i==index[j])
        {
            j++;
            continue;

        }}
        rem+=B[i];
    }
    cout<<rem<<endl;
    return rem;
}


int main()
{
  string a,b,c;
  cin>>a>>b>>c;
  cout<<c.size()<<endl;
  string rem = lcs(a,c);
  //cout<<rem<<endl;
    if(rem.empty())
    {
    cout<<0<<endl;
    return 1;
  }
    rem = lcs(b,rem);
    //cout<<rem<<endl;
    if(rem.empty())
    {
      cout<<1<<endl;
      return 0;
    }
    cout<<0<<endl;
    return 1;

}
