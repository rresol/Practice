#include <bits/stdc++.h>
#define sz(a) int((a).size())
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define mp make_pair
#define pb push_back
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define sd(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sl(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define sortv(a) sort(a.begin(),a.end())
#define test()  int t; cin>>t; while(t--)
#define fi first
#define se second
#define el "\n"
#define ll long long
#define ull unsigned ll
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
  
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

#define MAXN 5000005
char s[MAXN];
map<int,string> m;
int main()
{
	int n;
	cin>>n;
	int r,temp;
	string a;
	int last = 0;
	rep(i,n)
	{
		cin>>a;
		VI occ;
		cin>>r;
		rep(j,r)
		{
			cin>>temp;
			--temp;
			if(m.find(temp)!=m.end())
			{
				if(sz(m[temp])<sz(a))
					m[temp] = a;
			}
			else
				m[temp] = a;
			last = max(temp+sz(a),last);
		}
	}
	rep(i,last)
		s[i] = '0';
	map<int,string > ::iterator it;
	for(it= m.begin();it!=m.end();++it)
	{
		int pos = it->fi;
		string val = it->se;
		int i = 0;
		rep(j,sz(val))
			s[pos+j] = val[i++];
	}
	for(int i = 0;i<last;i++)
	{
		if(s[i]=='0')
			s[i] = 'a';
	}
	s[last] = '\0';
	cout<<s<<endl;
	return 0;
}
