#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
    int i=0;
    int num=0;
    int a[100]={0};
    srand((unsigned)time(NULL));
    for (i=0;i<100;i++)
        a[i]=rand()%101;
    for (i=0;i<100;i++)
        if ((a[i]%2==0)&&(a[i]<50))
            num++;
    printf("%d\n",num);
    return 0;
}
