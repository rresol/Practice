#include<bits/stdc++.h>
using namespace std;
int solve(string A) {

    int a_len = A.size();
    string s1;
    s1 = A;
    reverse(A.begin(),A.end());
    s1+="$";
    s1+=A;
    //int lps[s1.size()];
    vector<int> lps(s1.size());
    lps[0]= 0;
    int max_lps = 0;

    int i =1;
    int m = s1.size();
    //cout<<m<<endl;
      int len =0;
    while(i<m)
    {
      cout<<s1[0];
        if(s1[i]==s1[len])
        {
            len++;
            lps[i] = len;
            cout<<len<<endl;
            max_lps = max(lps[i],max_lps);
            i++;
        }

        else
        {
            if(len!=0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }

    }
    //cout<<max_lps<<endl;

    return (A.size()-lps.back());
}




int  main()
{
  string s;
  cin>>s;
  cout<<solve(s)<<endl;

}
