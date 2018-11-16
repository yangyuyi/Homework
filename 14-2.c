#include <stdio.h>
#include <string.h>
typedef struct num{
    int val;
    int pos;
}N;
int main(){
    int i,j,k;
    N a[10];
    N tmp;
    for (i=0;i<10;i++){
        scanf("%d",&a[i].val);
        a[i].pos=i;
    }
    for (i=0;i<10;i++){
        k=i;
        for (j=i+1;j<10;j++)
            if (a[j].val<a[k].val)
                k=j;
        if (k!=i){
            tmp=a[k];
            a[k]=a[i];
            a[i]=tmp;
        }
    }
    for (i=0;i<10;i++){
        printf("%d ",a[i].val);
    }
    printf("\n");
    for (i=0;i<10;i++){
        printf("%d ",a[i].pos);
    }
    printf("\n");
    return 0;
}
