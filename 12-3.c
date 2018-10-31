#include <stdio.h>
void input(int* a,int n);
int find(int key,int n,int* a);
int main(){
    int n;
    int x;
    int a[1000];
    scanf("%d",&n);
    input(a,n);
    scanf("%d",&x);
    printf("%d\n",find(x,n,a));
    return 0;
}
void input(int* a,int n){
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
}

int find(int key,int n,int* a){
    int i;
    for (i=0;i<n;i++)
        if (a[i]==key) return i;
    return -1;
}
