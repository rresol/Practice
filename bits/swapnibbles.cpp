#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int a = 1;




    a = 31;
    a = a&t;

    a = a<<4;
    t = t>>4;
    a = a|t;
    cout<<a<<endl;
}
