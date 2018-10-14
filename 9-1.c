#include <stdio.h>
int main(){
    float FA[100];
    float FB[100];
    int n=0;
    int i=0;
    int j=0;
    float tmp;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%f",&FA[i]);
    for (i=0;i<n;i++)
        for(j=i;j<n;j++)
            if (FA[i]<FA[j]){
                tmp=FA[i];
                FA[i]=FA[j];
                FA[j]=tmp;
            }
    for (i=0;i<n;i++)
        printf("%f ",FA[i]);
    for (i=0,j=n-1;i<j;i++,j--)
        FB[i]=FA[i]+FA[j];
    for (i=0;i<n/2;i++)
        printf("%f ",FB[i]);
    return 0;
}
