#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    char ans[100];
    gets(s);
    while (s[0]!='\0'){
        if (strlen(ans)<strlen(s))
            strcpy(ans,s);
        gets(s);
    }
    printf("%s\n",ans);
    return 0;
}
