#include <stdio.h>
int main(){
    int a[23]={1,1,1,2,2,2,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,7};
    int x=0;
    int l=0;
    int r=22;
    int mid=0;
    int pos1=0;
    int pos2=0;
    scanf("%d",&x);
    while (l<=r){
        if (l==r){
            pos1=l;
            break;
        }
        mid=(l+r)/2;
        if (a[mid]>=x){
            r=mid;
        } else l=mid+1;
    }
    l=0,r=22;
    while (l<=r){
        if (l==r){
            pos2=l;
            break;
        }
        mid=(l+r)/2;
        if (a[mid]<=x){
            l=mid;
        } else r=mid-1;
    }
    printf("%d %d",pos1,pos2);
    return 0;
}
