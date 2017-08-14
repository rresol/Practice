#include<bits/stdc++.h>
#include<string>
//#incldue<sring.h>
using namespace std;
string countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    string ans="1";
    for(int i=2;i<=A;i++)
    {
        int cou =1;
        string new_ans = "";
        int j;
        for(j=1;j<ans.size();j++)
        {
            if(ans[j]==ans[j-1])cou++;
            else
            {
                new_ans+= to_string(cou)+(ans[j-1]);
                cou = 1;
            }
        }
        if(!new_ans.empty()||cou>1)
        {
            new_ans = to_string(cou)+to_string(ans[j-1]);
            ans = new_ans;
        }
        else
            ans = to_string(1)+to_string(ans[0]);
    }
    return ans;

}

int main()
{
  int a;
  cin>>a;
  cout<<countAndSay(a);
}
