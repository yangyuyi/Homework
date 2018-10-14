#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
    int a[100]={0};
    int i=0;
    int x=0;
    bool flag=false;
    srand((unsigned)time(NULL));
    for (i=0;i<100;i++)
        a[i]=rand()%1001;
    for (i=0;i<100;i++){
        printf("%d ",a[i]);
    }
    scanf("%d",&x);
    for (i=0;i<100;i++)
        if (a[i]==x){
            printf("%d ",i);
            flag=true;
        }
    if (!flag){
        printf("-1");
    }
    return 0;
}
