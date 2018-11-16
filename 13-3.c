#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int inthestr(char *s,char ch);
int main(){
    char s1[110];
    char s2[110];
    int j=0;
    char i;
    char *p=(char *)malloc(sizeof(char));
    scanf("%s",s1);
    scanf("%s",s2);
    for (i='a';i<='z';i++){
        if ((inthestr(s1,i))&&(inthestr(s2,i))){
            *(p+j)=i;
            j++;
        }
    }
    *(p+j)='\0';
    printf("%s\n",p);
    return 0;
}
int inthestr(char *s,char ch){
    while (*s!='\0'){
        if (*s==ch) return 1;
        s++;
    }
    return 0;
}
