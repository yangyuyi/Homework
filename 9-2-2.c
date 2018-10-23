#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i=0;
    int len=0;
    int lens=0;
    gets(s);
    len=strlen(s);
    while (i<len){
        while (s[i]==' ') i++;
        if (i<len){
            lens=0;
            while ((s[i]!=' ')&&(i<len)){
                lens++;
                i++;
            }
            printf("%d ",lens);
        }
    }
    return 0;
}
