#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    char opt[20];
    int i=0;
    gets(s);
    printf("code:");
    for (i=0;i<strlen(s);i++)
        s[i]+=1;
    printf("%s\n",s);
    printf("decode:");
    for (i=0;i<strlen(s);i++)
        s[i]-=1;
    printf("%s\n",s);
    return 0;
}
