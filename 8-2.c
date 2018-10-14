#include <stdio.h>
#define NUM 11
int main(){
    int a[NUM]={2,1,6,4,3,5,8,9,8,7,9};
    int i=0;
    int j=10;
    int tmp=0;
    while (i<j){
        if (a[i]%2==0){
            while (a[j]%2==0) j--;
            if (i<j){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        i++;
    }
    for (i=0;i<NUM;i++)
        printf("%d ",a[i]);
    return 0;
}
