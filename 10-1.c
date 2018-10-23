#include <stdio.h>
int main(){
    int a[5][5];
    int i=0;
    int j=0;
    int k=0;
    bool flag;
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for (i=0;i<5;i++){
        k=0;
        for (j=0;j<5;j++){
            if (a[i][j]<a[i][k]) k=j;
        }
        flag=true;
        for (j=0;j<5;j++){
            if (a[j][k]>a[i][k]){
                flag= false;
                break;
            }
        }
        if (flag) printf("%d %d",i,k);
    }
    return 0;
}
