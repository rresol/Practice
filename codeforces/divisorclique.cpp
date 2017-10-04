#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int>ans(n,0);
    ans[0] =1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(__gcd(a[i],a[j])==a[j] && ans[i]<(ans[j]+1))
            {
                ans[i] = ans[j]+1;
            }
        }
    }

    cout<<ans[n-1]<<endl;
    return 0;
}
