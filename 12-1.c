#include <stdio.h>
void input(int* a,int n);
void output(int* a,int n);
void sort(int* a,int n);
bool find(int* a,int l,int r,int key);
int main(){
    int n;
    int x;
    int a[1000];
    scanf("%d",&n);
    input(a,n);
    output(a,n);
    sort(a,n);
    output(a,n);
    scanf("%d",&x);
    if (find(a,0,n-1,x)) printf("Found");
    else printf("Not Found");
    return 0;
}
void input(int* a,int n){
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void output(int* a,int n){
    int i;
    for (i=0;i<n-1;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[n-1]);
}
void sort(int* a,int n){
    int i,j,k;
    int tmp;
    for (i=0;i<n-1;i++){
        k=i;
        for (j=i+1;j<n;j++)
            if (a[k]>a[j]) k=j;
        if (k!=i){
            tmp=a[i];
            a[i]=a[k];
            a[k]=tmp;
        }
    }
}
bool find(int* a,int l,int r,int key){
    int mid=(l+r)/2;
    if (l>r) return false;
    if (key==a[mid]) return true;
    if (key<a[mid]) find(a,l,mid-1,key);
    else find(a,mid+1,r,key);
}
