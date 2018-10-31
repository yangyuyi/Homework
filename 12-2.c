#include <stdio.h>
void input(int* a,int n);
int find_max(int* a,int n);
int main(){
    int n;
    int a[1000];
    scanf("%d",&n);
    input(a,n);
    printf("%d\n",find_max(a,n));
    return 0;
}
void input(int* a,int n){
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
}

int find_max(int* a,int n){
    int i;
    int p=0;
    for (i=1;i<n;i++)
        if (a[i]>a[p]) p=i;
    return a[p];
}
