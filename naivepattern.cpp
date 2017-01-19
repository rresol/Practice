#include<iostream>
#include<cstdio>
using namespace std;

void search(string txt,string pat)
{
  int i=0,j=0;
  for(i=0;i<=(txt.length()-pat.length());i++)
  {
    for(j=0;j<pat.length();j++)
    {
      if(txt[i+j]!=pat[j])
      {

        break;
      }

    }
    if(j==pat.length())
    {
      printf("Found\n");
      i+= (pat.length()-1);
    }

    else
    {
      i+=(j-1);
    }
  }
  cout<<"Not Found\n";
  return;
}

int main()
{
  string txt,pat;
  cin>>txt;
  cin>>pat;
  search(txt,pat);
}
