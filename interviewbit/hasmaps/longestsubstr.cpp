#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    map<char,int>alpha;
    int cou =0;
    int max_length =0;
    int start_index =0;
    for(int i=0;i<A.size();i++)
    {
        if(alpha.find(A[i])!=alpha.end())
        {
            if(alpha[A[i]]<start_index)
            {
                cout<<alpha[A[i]];
                alpha[A[i]] = i;
                cou++;
            }
            else
            {
                cout<<"step2"<<endl;
                start_index = i;
                alpha[A[i]] = i;
                cou  = 1;
            }
        }
        else
        {
          cout<<"step3"<<endl;
            cou++;
            alpha[A[i]] = i;
        }
        max_length = max(cou,max_length);
    }
    return max_length;
}
int main()
{
  string s;
  cin>>s;
  cout<<lengthOfLongestSubstring(s);
}
