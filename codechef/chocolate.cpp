#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<int>A, int B, int curr_min){
  long long sum=0,students=1;
  for(int i=0;i<A.size();i++){
    if(curr_min<A[i]){
      return false;
    }
    if(sum+A[i]>curr_min){
      students++;
      sum = A[i];
      if(students>B)return false;
    }else{
      sum+=A[i];
    }
  }
  return true;
}

int binary_search(vector<int>A, int B){
  long long sum =0;
  int size = A.size();
  if(size<B){
    return -1;
  }
  for(int i=0;i<A.size();i++)sum+=A[i];
  long long start=0,mid=0,end=sum;
  int result = INT_MAX;
  while(start<=end){
    mid = (start+end)/2;
    if(is_possible(A,B,mid)){
      result = min(result,(int)mid);
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
}


int main(){
  int n,B;
  cin>>n>>B;
  vector<int>A(n);
  for(int i=0;i<n;i++)cin>>A[i];
  cout<<binary_search(A,B)<<endl;
}
