#include <stdio.h>
int main(){
    FILE *fp;
    char file[100];
    int n,x,i;
    int num1=0;
    int num2=0;
    int num3=0;
    char ch;
    scanf("%s",file);
    fp=fopen(file,"r");
    if (fp==NULL){
        printf("Error\n");
        return 1;
    }
    
    while ((fscanf(fp,"%c",&ch))!=EOF){
        if (ch>='a' && ch<='z') num1++;
        if (ch>='0' && ch<='9') num2++;
        if (!((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))) num3++;
    }
    fclose(fp);
    printf("%d %d %d\n",num1,num2,num3);
    return 0;
}
