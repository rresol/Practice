#include<bits/stdc++.h>
using namespace std;
int main(){
  long long k,a,b;
  cin>>k>>a>>b;
  int alice[4][4];
  for(int i=1;i<=3;i++){
    cin>>alice[i][j];
  }
  map<pair<int,int>,int >mp;
  int bob[4][4];
  for(int i=1;i<=3;i++){
    cin>>bob[i][j];
  }
  vector<int>a1;
  vector<int>b1;
  a1.push_back(a);
  b1.push_back(b);

  pair<int,int> p = make_pair(a,b);
  m[p]=0;
  int index;
  for(int i=1;i<k;i++){
    int al = alice[a1[i-1]][b1[i-1]];
    int bl = bob[a1[i-1]][b1[i-1]];
    a1.push_back(al);
    b1.push_back(bl);
    pair<int,int> p = make_pair(a,b);
    if(mp.find(p)!=mp.end()){
      index = mp[p];
      break;
    }
    m[p]=i;
  }
  int rem = (k-1)%a1.size();
  int additional_a =0;
  int additional_b =0;
  int score_a  =0;
  int score_b  =0;
   for(int i=index;i<a1.size();i++){
    if((a1[i]==1 && b1[i]==3)|| (b1[i]==1 && a1[i]==3)){
      if(a1[i]==1)score_a+=1;
      else score_b+=1;
    }
    else{
      if(a1[i]>b1[i])score_a+=a[i];
      else score_b+=a[i];
    }
    if(i==(rem-1))additional_a =score_a;
     if(i==(rem-1))additional_b =score_b;
  }

}
