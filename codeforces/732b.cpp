  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
    long long int n,k;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    long long int tot =0;
    if(n==1)
    {
      cout<<0<<endl;
      cout<<a[0]<<endl;
      return 0;
    }
    for(int i=0;i<n-1;i++ )
    {
      if((a[i]+a[i+1])<k)
      {
        tot+= k-(a[i]+a[i+1]);
        a[i+1]+=(k-(a[i]+a[i+1]));
      }
    }
    cout<<tot<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
  }
