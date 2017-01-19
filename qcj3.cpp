#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
        long long int n;
        cin>>n;
        long long int a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        long long ans = 0;
        for(int i=1;i<=n;i++)
            if(a[i]%2)
                ans ^= (i);
        if(ans)
            cout<<"Tom wins\n";
        else
            cout<<"Hank Wins\n";

    }
    return 0;
}
