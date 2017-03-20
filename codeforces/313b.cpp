#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;
int arr[305][305];

	int visited[305];
int n,m,k;

int withinBoundary(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m)
		return 1;
	else
		return 0;
}
int main(){
	cin>>n>>m>>k;
	vector<pair<int,int> >q;

	int dir=1;
	int x=0,y=0;
	q.pb(mp(0,0));
	while(true){
		y+=dir;
		if(y==m){
			dir*=-1;
			y=m-1;
			x++;
		}
		if(y==-1){
			dir*=-1;
			y=0;
			x++;
		}
		if(x==n)
			break;

		q.pb(mp(x,y));

	}
	int j=0;
	REP(i,k-1){
		cout<<"2 ";
		cout<<q[j].first+1<<" "<<q[j].second+1<<" "<<q[j+1].first+1<<" "<<q[j+1].second+1<<endl;
		j+=2;
	}
	cout<<(n*m)-(2*(k-1))<<" ";
	while(j<q.size()){
		cout<<q[j].first+1<<" "<<q[j].second+1<<" ";
		j++;
	}
	return 0;
}
