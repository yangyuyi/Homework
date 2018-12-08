#include <stdio.h>
typedef struct student{
    char name[10];
    int eng;
    int math;
    int sum;
}STU;
int main(){
    FILE *fp;
    STU s[30];
    STU s2[30];
    char file[100];
    int n=10;
    int x,i;
    
    fp=fopen("information.txt","w");
    if (fp==NULL){
        printf("Error\n");
        return 1;
    }
    for (i=0;i<n;i++){
        scanf("%s%d%d",s[i].name,&s[i].eng,&s[i].math);
        s[i].sum=s[i].math+s[i].eng;
        fprintf(fp,"%-10s%-5d%-5d%-5d\n",s[i].name,s[i].eng,s[i].math,s[i].sum);
    }
    fclose(fp);

    fp=fopen("information.txt","r");
    if (fp==NULL){
        printf("Error\n");
        return 1;
    }
    for (i=0;i<n;i++){
        fscanf(fp,"%s%d%d%d",s2[i].name,&s2[i].eng,&s2[i].math,&s2[i].sum);
        fgetc(fp);
        printf("%-10s%-5d%-5d%-5d\n",s2[i].name,s2[i].eng,s2[i].math,s2[i].sum);
    }
    fclose(fp);
    return 0;
}
