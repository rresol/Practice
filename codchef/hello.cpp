#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    double d,u,m,r,c;
    int n;
    cin>>d;
    cin>>u;
    cin>>n;
    int count =0;
    double total_cost = d*u;
    double min_cost = 100000000.0;
    int j=1;
    while(n--)
    {
        cin>>m>>r>>c;
        double new_total = (r*u)+c/m;
        if((total_cost)>new_total && min_cost>new_total)
        {
          count = j;
          min_cost = new_total;
        }
        cout<<total_cost<<"  "<<min_cost<<"  "<<new_total<<endl;
        j++;
    }
    cout<<count<<endl;
  }
}
