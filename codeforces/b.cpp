#include <bits/stdc++.h>
using namespace std;
typedef long long int64;
int64 calc(vector<int64>&a, int64 i)
{
    int64 sum =0;
  //  cout<<i<<endl;
    for(int j=i;j<a.size();j+=2)
    {
        sum+=a[j];
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    //vector<long long>a(n);
    int64 a;
    vector<long long>neg;
    int64 sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=0)
        {
            sum+=a;
        }
        else
        {
            neg.push_back(a);
        }
    }
    sort(neg.begin(),neg.end());
    reverse(neg.begin(),neg.end());
    int64 val =0;
    //cout<<neg.size()<<endl;
    if(neg.size()&1)val = calc(neg,1);
    else val = calc(neg,0);
    cout<<(sum+val)<<endl;
    return 0;
}
