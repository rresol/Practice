#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    char s[7] =  {'S','U','V','O','J','I','T'};
    // printf("%c\n",s[0] );
    char a[1000];
    scanf("%s",a);
     int match_index = 0;
     int su = 0;
     int suj = 0,i;
    for(i=0;i<strlen(a);i++)
    {

        // ?printf("%c\n",s[match_index] );
        if((s[match_index])==(a[i]))
        {
          // printf("%c\n",s[match_index] );
            match_index++;
            if(match_index==7)
            {
                suj++;
                match_index =0;
            }
        }
        else {
            if(match_index>=3)
            {
                su++;
            }
            if(a[i-1]=='S')
            {i = i-1;}
            match_index =0;
        }
    }
    printf("SUVO = %d, SUVOJIT = %d\n",su,suj);}
    return 0;

}
