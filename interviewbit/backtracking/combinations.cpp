#include<bits/stdc++.h>
using namespace std;
//vector<int>A;
void generateComb(vector<int>&A, int index, vector<int>&current, vector<vector<int> >&result, int k){
  if( k==0)
  {
    result.push_back(current);
    return;
  }
  if(index>=A.size())
  {
    return;
  }
  generateComb(A,index+1,current,result,k);
  current.push_back(A[index]);
  generateComb(A, index+1, current, result,k-1);
  current.pop_back();
}
vector< vector<int> >combinations(vector<int>&A , int k){
  vector<vector<int> >result;
  vector<int>current;
  sort(A.begin(),A.end());
  generateComb(A,0,current,result,k);
  sort(result.begin(),result.end());
  return result;
}


int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>A;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    A.push_back(x);
  }
  cout<<"step 1"<<endl;
  vector< vector<int> >result;
  result = combinations(A,k);
  for(int i=0;i<result.size();i++)
  {
    for(int j=0;j<result[i].size();j++)
    {
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
