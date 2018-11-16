#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str[]="123456summer123";
    char *p;
    int i,j=0;
    int num=0;
    for (i=0;i<strlen(str);i++)
        if ((str[i]>='0')&&(str[i]<='9'))
            num++;
    printf("%d\n",num);
    if ((p=(char *)malloc(sizeof(char)*num))!=NULL){
        for (i=0;i<strlen(str);i++)
            if ((str[i]>='0')&&(str[i]<='9')) {
                *(p+j)=str[i];
                j++;
            }
    } else return 0;
    *(p+num)='\0';
    printf("%s",p);
    return 0;
}
