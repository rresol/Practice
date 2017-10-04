#include <bits/stdc++.h>
using namespace std;

long long a[1005][1005];
long long dx[] = {1,0};
long long dy[] = {0,1};
long long m,n,castle_x,castle_y;

bool isValid(long long x, long long y){
    if(x<1 || y<1 || x>castle_x || y>castle_y)
        return 0;
    return 1;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long m,n;
        cin>>m>>n;
        for(long long i=1;i<=m;i++)
        {
            for(long long j=1;j<=n;j++)
                cin>>a[i][j];
        }
        long long x,y,t;
        cin>>x>>y>>t;
        castle_x = x;
        castle_y = y;
        long long rem;
        queue<pair<pair<long long,long long>, long long > >q;
        q.push({{1,1},a[1][1]});
        bool flag = true;
        while(!q.empty())
        {
            long long v_x = q.front().first.first;
            long long v_y = q.front().first.second;

            long long cost = q.front().second;
            q.pop();
            if(v_x==castle_x && v_y ==castle_y)
            {
                if(cost<=t)
                {
                    flag = false;
                    rem = t-cost;
                    break;
                }
            }
            for(long long i=0;i<2;i++)
            {
                if(isValid(v_x+dx[i],v_y+dy[i]))
                {
                    long long x = v_x+dx[i];
                    long long y = v_y+dy[i];
                    if(x==castle_x && y ==castle_y)
                    {

                        if((cost+a[x][y])<=t)
                        {
                            flag = false;
                            rem = t-cost;
                            break;
                        }
                    }
                    q.push({{x,y},cost+a[x][y]});
                }
            }
            if(!flag)break;
        }
        if(flag)cout<<"NO"<<endl;
        else{

            cout<<"YES"<<endl;
            cout<<rem<<endl;
        }

    }
    return 0;
}
