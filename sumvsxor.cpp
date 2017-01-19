#include<bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long int n;
    int count=0;
    int rem;
    cin>>n;
    while(n>1)
        {
            rem=n%2;
            if(rem==0)
                count++;
            n=n/2;
        }
    n=1<<count;
    cout<<n;
    return 0;
}
