#include <stdio.h>
#include <math.h>
bool check(int x);
int main(){
    int n,m;
    int i;
    scanf("%d%d",&n,&m);
    for (i=n;i<=m;i++){
        if (check(i))
            printf("%d ",i);
    }
    return 0;
}
bool check(int x){
    int i;
    int sum=1;
    for (i=2;i<=floor(sqrt(x));i++)
        if (x%i==0){
            sum=sum+i+x/i;
        if (sum>x) return false;
    }
    if (sum==x) return true;
    else return false;
}
