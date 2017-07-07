 #include<bits/stdc++.h>
 using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--) {
    /* code */
    int n;
    cin>>n;
    map<int,int> arrival;
    vector<int>stay;
    for(int i=0;i<n;i++)
    {
      int x, y;
      cin>>x>>y;
      arrival[x] = y;
    }
    map<int,int>::iterator i;
    int tot = 0;
    while (i!=arrival.end()) {
      /* code */
      int index;
      vector<int>::iterator j;
      j = upper_bound(stay.begin(),stay.end(),i->first);
      if(j!=stay.end())
      {
         index = j - stay.begin();
        if(index>0)
        {
          if(stay[index-1]<=i->first)
          {
            stay.erase(stay.begin()+(index-1));
          }
          else
          {
            tot++;
          }
        }
      }
      else
      {
        if(stay[stay.size()-1]<=i->first)
        {
          stay.erase(stay.begin()+(index-1));
        }
        else
        {
          tot++;
        }
      }
      stay.push_back((i->first+i->second));
      i++;
    }
    cout<<tot<<endl;
  }
}
