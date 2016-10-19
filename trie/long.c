#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
typedef struct Trie{
  bool isEnd;
  struct Trie* letter[1000];
}trie;

void Insert(trie* root, char* key)
{


  int index;
  int length = strlen(key);
  int i;
  trie* temp = root;
  for(i=0;i<length;i++)
  {
    if(!(temp->letter[key[i]-'a']))
    {
      printf("HI\n" );
      temp->letter[key[i]-'a'] = (trie*)calloc(1,sizeof(trie));

    }
    //printf("HI\n");
    temp->isEnd=false;
    temp = temp->letter[key[i]-'a'];
    printf("Inserting   %c\n",key[i] );
  }
  printf("exit\n");
  temp->isEnd = true;
  return;
}

void Search(trie* root, char* prefix)
{
  if(!root)
  {
    return;
  }
  trie* temp = root;
  int i;
  char pref[22];
  char *ans;
  //ans='\0';
  for(i=0;i<strlen(prefix);i++)
  {
    if(!temp->letter[prefix[i]-'a'])
    {
      break;
    }
    //printf("%s\n",ans);
    pref[i] = prefix[i];
    temp = temp->letter[prefix[i]-'a'];
    if(temp->isEnd){
      printf("%c\n",prefix[i] );
      ans = pref;
    }
    printf("%s\n",ans);
  }
  return;
}
int main(){
 trie* root = (trie*)calloc(1,sizeof(trie));
 char keys[][8] = {"are", "area", "base", "basement", "cat",
                      "children", "cater"};
  int i;
  //for (i = 0; i < ARRAY_SIZE(keys); i++)
      Insert(root, "are");
      Insert(root, "base");

      Insert(root, "area");
      printf("Proceeding\n");
      Insert(root, "base");
      Insert(root, "basement");
      Insert(root, "cat");
      Insert(root, "cater");


  char prefix[22];
  Search(root,"caterer");
  Search(root,"basemexy");
}
