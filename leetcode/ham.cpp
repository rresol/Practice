#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string reverseString(string s) {
  reverse(s.begin(),s.end());
  //string b = reverse(s.begin(), s.end());

        return s;
    }

int main()
{
        string s;
        cin>>s;
        cout<<reverseString(s);
        return 0;
}
