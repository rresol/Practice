#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int ans =0;
  int cou =0;
  int end;
  int start;
  for(int i=0;i<n-1;i++)
  {
    if(a[i]<=a[i+1])
    {

      if(cou)
        {ans++;
          end=i;
        }

      cou=0;
    }
    else{
      if(ans==0&&cou==0)
      {
          start = i;

      }
      cou++;
    }
  }
  if(cou>0)
  {
    ans++;
    end = n-1;
  }
  if(ans>1)
  {
    //cout<<start<<"  "<<end;
    cout<<"no"<<endl;
  }
  else if(ans==0)
  {
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
  }
  else{
    if(start==0&& (cou==n-1))
    {
      cout<<"yes"<<endl;
      cout<<1<<" "<<n<<endl;
    }
    else if(start==0)
    {

      if(a[end+1]>=a[start])
      {
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<end+1<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
    }
    else if(end==n-1 )
    {
      if(a[start-1]<=a[end]){
      cout<<"yes"<<endl;
      cout<<start+1<<" "<<end+1<<endl;}
      else{
        cout<<"no"<<endl;
      }
    }
    else if(a[start]<=a[end+1]&&a[end]>=a[start-1]){
      cout<<"yes"<<endl;
      cout<<start+1<<" "<<end+1<<endl;

    }
    else
    {
      cout<<"no"<<endl;
    }
  }
  return 0;
}
