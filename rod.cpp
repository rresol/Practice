#include<iostream>
#include<climits>
using namespace std;

int recursive(int price[], int length)
{
  if(length==0)
  {
    return 0;
  }
  int max = INT_MIN;
  int result;
  for(int i=0;i<length;i++)
  {

    result = price[i] + recursive(price,length-i-1);
    if(result>max)
    {
      max  = result;
    }
  }
  return max;
}

int bottomUp(int price[], int length)
{
  int result[length+1];
  result[0] = 0;
  //result[1] = price[0];
  for(int i=1;i<=length;i++)
  {
    int max = INT_MIN;
    for(int j=0;j<i;j++)
    {
      int res = price[j] + result[i-j-1];
      if(max<res)
      {
        max = res;
      }
    }
    result[i] = max;
  }
  return result[length];
}

int main()
{
    int length;
    cin>>length;
    int price[length];
    for(int i=0;i<length;i++)
    {
      cin>>price[i];
    }
    cout<<recursive(price,length)<<endl;
    cout<<bottomUp(price,length)<<endl;
}
