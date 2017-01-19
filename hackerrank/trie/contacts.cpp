#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include<bits/stdc++.h>

typedef struct node
    {
    bool isEnd;

    struct node* letter[10];
}Trie;


bool insert(Trie* root, char* key)
    {
    Trie* temp = root;
    int i;
    int length = strlen(key);
    bool result = true;
    for(i=0;i<length;i++)
        {
        if(!temp->letter[key[i]-'0'])
            {
            temp->letter[key[i]-'0'] = (Trie*)calloc(1,sizeof(Trie));
        }
        temp = temp->letter[key[i]-'0'];
        //temp->isPrefix= true;
        if(temp->isEnd && i!=(length-1))
            {
              
            result = false;
        }

    }
    for(i=0;i<10;i++)
    {
      if(temp->letter[i])
      {
        result = false;
        break;
      }
    }

    temp->isEnd = true;
    return result;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
    int n;
    bool result = true;
    scanf("%ld\n",&n);
    Trie* root = (Trie*)calloc(1,sizeof(Trie));
    while(n--)
        {
        char key[11];
        scanf("%s",key);
        if(!insert(root,key))
            {
            result = false;
        }
    }
    if(result)
    {printf("YES\n");}
    else
    {
      printf("NO\n");
    }
    free(root);
  }
  return 0;
}
