/**************************************************
   Had a dream, I was king, I woke up, still king.
***************************************************/
#include <bits/stdc++.h>
using namespace std;

#define MOD 						1000000007
#define MAX     					INT_MAX
#define MIN     					INT_MIN
#define pb      					push_back
#define ff    						first
#define ss    						second
#define mp      					make_pair
#define CLR     					clear()
#define set(a)                		memset( a, -1,    sizeof(a) )
#define clr(a)               		memset( a,  0,    sizeof(a) )
#define de(x) 						cout << '>' << #x << ':' << x << endl;


typedef  long long         	 	 ll;

int fun(char c){
	if(c=='R'){return 0;}
	else if(c=='B'){return 1;}
	else{return 2;}
}






int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	string str;
	cin>>n>>m;
	std::vector<int> vec[n];
	for(ll i=0;i<n;i++){
		cin>>str;
		for(ll k=0;k<str.length();k++){
			vec[i].push_back(fun(str[k]));
		 }
	}
	int x,y;
	x=0;
	y=0;
	if(vec[0][0]==0){
		for(ll i=0 ; i<m ;i++){
			if(vec[0][i]!=0){
				break;
			}
			else{x++;}
		}
		for(ll i=0 ; i<n ;i++){
			if(vec[i][0]!=0){
				break;
			}
			else{y++;}
		}




	}
	else if (vec[0][0]==1){
		for(ll i=0 ; i<m ;i++){
			if(vec[0][i]!=1){
				break;
			}
			else{x++;}
		}
		for(ll i=0 ; i<n ;i++){
			if(vec[i][0]!=1){
				break;
			}
			else{y++;}
		}

	}
	else{
		for(ll i=0 ; i<m ;i++){
			if(vec[0][i]!=2){
				break;
			}
			else{x++;}
		}
		for(ll i=0 ; i<n ;i++){
			if(vec[i][0]!=2){
				break;
			}
			else{y++;}
		}
	}
	// de(x)
	// de(y)
	if(x==m){
		if(y*3==n){
		  int flag=1;
		  int tom,dick,harry;
		  tom=vec[0][0];
		  dick=vec[y][0];
		  harry=vec[2*y][0];
		  // de(tom)
		  // de(dick)
		  // de(harry)
		  if(tom+dick+harry==3){

		  	for(int i=0;i<y ;i++){
		  		for(int j=0;j<m;j++){
		  			if(vec[i][j]!=tom){
		  				flag=0;
		  				break;
		  			}
		  		}
		  	}
		  	for(int i=y;i<2*y ;i++){
		  		for(int j=0;j<m;j++){
		  			if(vec[i][j]!=dick){
		  				flag=0;
		  				break;
		  			}
		  		}
		  	}
		  	for(int i=2*y;i<3*y ;i++){
		  		for(int j=0;j<m;j++){
		  			if(vec[i][j]!=harry){
		  				flag=0;
		  				break;
		  			}
		  		}
		  	}
		  	if(flag){
		  		cout<<"YES"<<endl;
		  	}
		  	else{cout<<"NO"<<endl;}

		  }
		  else{
		  	cout<<"NO"<<endl;
		  }
		}
		else{
			cout<<"NO"<<endl;
		}
	}


	else if(y==n){

		if(x*3==m){

		  int flag=1;
		  int tom,dick,harry;
		  tom=vec[0][0];
		  dick=vec[0][x];
		  harry=vec[0][2*x];
		  // de(tom)
		  // de(dick)
		  // de(harry)
		  if(tom+dick+harry==3){

		  	for(int i=0;i<x ;i++){
		  		for(int j=0;j<n;j++){
		  			if(vec[j][i]!=tom){
		  				flag=0;
		  				break;
		  			}
		  		}
		  	}
		  	for(int i=y;i<2*x ;i++){
		  		for(int j=0;j<n;j++){
		  			if(vec[j][i]!=dick){
		  				flag=0;
		  				break;
		  			}
		  		}
		  	}
		  	for(int i=2*x;i<3*x ;i++){
		  		for(int j=0;j<n;j++){
		  			if(vec[j][i]!=harry){
		  				flag=0;
		  				break;
		  			}
		  		}
		  	}
		  	if(flag){
		  		cout<<"YES"<<endl;
		  	}
		  	else{cout<<"NO"<<endl;}

		  }
		  else{
		  	cout<<"NO"<<endl;
		  }
		}
		else{
			cout<<"NO"<<endl;
		}

	}


	else{
		cout<<"NO"<<endl;
	}

	return 0;

}
