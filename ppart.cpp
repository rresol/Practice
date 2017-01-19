#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<climits>
#include<string>
using namespace std;

// int isPalindrome(string s, int start, int end)
// {
//
//   if(start==end)
//     return 1;
//   // string rev= s.copy(rev,end-start+1,start);
//   // string rev_new = rev;
//   // reverse(s.begin(),s.end());
//   // return s==rev;
// }
//
// int recursive(string s, int start, int end)
// {
//
//   if(isPalindrome(s))
//     return 0;
//
//   int min = INT_MAX;
//   int res;
//   for(int i=start;i<end;i++)
//   {
//     res = recursive(s,start,i) + recursive(s, i+1,end) +1;
//     if(min>res)
//       min = res;
//   }
//   return min;
// }


int main()
{
  string s;

  cin>>s;
  string rev;
  // int result = isPalindrome(s);
  // cout<<result<<endl;
  size_t lenght = s.copy(rev,8,0);
  rev[lenght] = '\0';
  string rev_new = rev;
  cout<<rev_new<<"  "<<rev<<endl;

}
