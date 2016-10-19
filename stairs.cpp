  #include<iostream>
  using namespace std;
  int main()
  {
      int t;
      cin>>t;
      while(t--)
      {
        int n;
        cin>>n;
        if(n==1)
          {
            cout<<1<<endl;
          }
          else
          {

            long long int a =1;
            long long int b =1;
            long long int c;
            for(int i=2;i<=n;i++)
            {
              c = (a+b)%1000000007;
              a = b%1000000007;
              b = c%1000000007;
            }
            c = c%1000000007;
            cout<<c<<endl;
          }
      }

  }
