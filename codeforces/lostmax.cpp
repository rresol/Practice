#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    getline(cin,s);

    vector<int>arr;
    istringstream j(s);
    int temp;
    while(j>>temp)
    {
      arr.push_back(temp);
    }
    cout<<"HI";
    sort(arr.begin(),arr.end());
    int last_num = arr[arr.size()-1];
    if(last_num!=(arr.size()-1))
    {
      cout<<last_num<<endl;
    }
    else{
      cout<<arr[arr.size()-2]<<endl;
    }
  }
  return 0;
}
