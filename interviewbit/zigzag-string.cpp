#include<bits/stdc++.h>
using namespace std;

string solve(string A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<char> >ans(B);
    int j= 0;
    bool flag = false;
    for(int i=0;i<A.size();i++)
    {
        ans[j].push_back(A[i]);
        cout<<j<<endl;
        if (!flag)
            j++;
        else
            j--;
        if(j>=B)
        {
            flag = true;
            j =j-2;
        }
        if(j==0)
        {
            flag=false;
        }
    }
    string lans="";
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            lans+= ans[i][j];
        }
    }
    return lans;
}




int main()
{

string s;
cin>>s;
solve(s,3);
}
