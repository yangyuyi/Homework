#include <stdio.h>
#include <string.h>
int main(){
    char s1[60];
    char s2[60];
    int np=0;
    char* p;
    int pos[60];
    int i=0;
    scanf("%s",s1);
    scanf("%s",s2);
    while (strstr(s1,s2)!=NULL){
        np++;
        p=strstr(s1,s2);
        pos[np]=strlen(s1)-strlen(p)+1;
        for (i=pos[np]-1;i<pos[np]-1+strlen(s2);i++)
            s1[i]=' ';
    }
    printf("含有字符串%d个,位置：",np);
    for (i=1;i<np;i++) printf("%d,",pos[i]);
    printf("%d。\n",pos[np]);
    return 0;
}
