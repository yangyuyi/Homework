#include <stdio.h>
int main(){
    FILE *fp;
    int n,x,i;
    int counter=0;
    
    fp=fopen("aa.txt","r");
    if (f==NULL){
        printf("Error\n");
        return 1;
    }
    
    fscanf(fp,"%d",&n);
    for (i=1;i<=n;i++){
        fscanf(fp,"%d",&x);
        if (x%2==0) counter++;
    }
    fclose(fp);
    printf("%d",counter);
    return 0;
}
