#include <stdio.h>
#include <math.h>
long long calculate(int x);
int main(){
    int x;
    scanf("%d",&x);
    printf("%lld",calculate(x));
    return 0;
}
long long calculate(int x){
    int i;
    long long res=0;
    for (i=1;i<=x;i++){
        res+=i*(i+1);
    }
    return res;
}
