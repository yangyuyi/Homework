#include <stdio.h>
#include <string.h>
int main(){
    char s[2020];
    int i;
    int len;
    scanf("%s",s);
    len=strlen(s);
    for(i=len-1;i>0;i--)
        s[2*i]=s[i];
    for (i=1;i<2*len-2;i+=2)
        s[i]='#';
    s[2*len-1]='\0';
    printf("%s\n",s);
    for (i=1;i<len;i++)
        s[i]=s[2*i];
    s[len]='\0';
    printf("%s\n",s);
    return 0;
}
