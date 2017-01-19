#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 26

void badHeuristic(string pat, int badchar[NO_OF_CHARS])
{
  int i;
  for(i=0;i<NO_OF_CHARS;i++)
  {
    badchar[i] = -1;
  }
  for (i = 0; i < pat.length(); i++){
         badchar[(int) pat[i]] = i;
}}

void search(string txt, string pat)
{
  int m = pat.length();
  int n = txt.length();
  int s =0;
  int badchar[NO_OF_CHARS];
  badHeuristic(pat,badchar);
  while(s<=n-m)
  {
    int j = m-1;
    while(j>=0 && txt[s+j]==pat[j])
    {
      j--;
    }
    if(j<0)
    {
      printf("Found at %d", s);
      s += (m+s<n?m-badchar[txt[s+m]]:1);
    }
    else
    {
      s+= max(1,j-badchar[txt[s+j]]);
    }
  }
}

int main()
{
  string txt;
   string pat;
   cin>>txt;
   cin>>pat;
   search(txt, pat);
   return 0;
}
