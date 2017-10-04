#include <bits/stdc++.h>

using namespace std;

int sma [3];
int cap [3];

long long t , n , k , m, mod = 100000;
string s;

int dp [200 + 1][200 + 1];

int rec(int l, int r){

    if(l > r) return 1;                 // valid base case
    if(l == r) return 0;                // invalid base case

    int &st = dp[l][r];
    if(st != -1) return st;             // check if dp state has visited before

    long long sum = 0, ways = 0;

    for(int i = l + 1; i <= r; i += 2){

        for(int j = 0; j < 3; j++){                 // try all possible given characters

            if( (s[l] == cap[j] || s[l] == '?') && (s[i] == sma[j] || s[i] == '?')){        // check for valid dividing

                 ways = ( rec(l + 1, i - 1) % mod * rec(i + 1, r) % mod ) % mod;
                 sum = (sum % mod + ways % mod ) % mod;                                 // distribute the mod in the equation
            }
        }
    }

    return st = sum;
}

int main()
{

    sma[0] = 'a', sma[1] = 'b', sma[2] = 'c';
    cap[0] = 'A', cap[1] = 'B', cap[2] = 'C';

    memset(dp , -1, sizeof dp);                     // reset dp states as unvisited

    cin >> n >> s;
    cout << rec(0 , n - 1);

    return 0;
}
