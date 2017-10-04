#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int chess[16][16];
int cou[16][16];
int dx[] = {2,2,-1,1};
int dy[] = {-1,1,2,2};
bool isValid(int x,int y)
{
    if(x<1 || y<1 || x>15 || y>15)return 0;
    return 1;
}
void dfs(int x, int y)
{
  //cout<<x<<" "<<y<<endl;
    cou[x][y] = 1;
    chess[x][y]++;
    for(int i=0;i<4;i++){
        //cout<<dx[i]<<" "
        if(isValid(x+dx[i],y+dy[i])){
            if(!cou[x+dx[i]][y+dy[i]]){
                dfs(x+dx[i],y+dy[i]);
            }
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    dfs(1,1);
    //cout<<1<<endl;
    memset(cou,0,sizeof(cou));
    dfs(1,2);
    //cout<<2<<endl;
    memset(cou,0,sizeof(cou));
    dfs(2,1);
    //out<<3<<endl;
    memset(cou,0,sizeof(cou));
    dfs(2,2);

    //memset(cou,0,sizeof(cou));
    //dfs(1,2);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(chess[x][y]==4)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
