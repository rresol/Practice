#include <bits/stdc++.h>

using namespace std;

long buyMaximumProducts(int n, long k, vector <int> a) {
    // Complete this function


    //int ans[k+1];
    //vector<int>ans(k+1,0);
    //ans[0] =0;
    int ans[n+1][k+1];
    //cout<<"step1"<<endl;
    //memset(ans,0,sizeof(ans));
    for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=k;j++)
      {
        ans[i][j] =0;
      }
    }
    for(int i=a[0];i<=k;i++)
    {
      ans[0][i] = 1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=a[i];j<=k;j++)
        {
            int max_val = INT_MIN;
            //cout<<"step 2"<<endl;
            for(int l=0;l<=(i+1);l++)
            {
                int expend = l*a[i];
                int rem = (j-expend);
                if(rem<0)break;
                max_val = max(max_val,ans[i-1][rem]+l);
                //cout<<i<<" "<<j<<"  "<<max_val<<" "<<rem<<endl;
            }
            //cout<<"step3"<<endl;
            //max_val = max_val>(i+1)?i+1:max_val;
            ans[i][j] = max_val;

        }
    }
    return ans[n-1][k];
    //return ans[k];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    long k;
    cin >> k;
    long result = buyMaximumProducts(n, k, arr);
    cout << result << endl;
    return 0;
}
