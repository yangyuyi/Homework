#include <stdio.h>
#include <math.h>
bool isPrime(int x);
int main(){
    int num=0;
    int i;
    for (i=1;i<=1000;i++){
        if (isPrime(i)){
            num++;
            if (num%8==0) printf("%d\n",i);
            else printf("%d ",i);
        }
    }
    return 0;
}
bool isPrime(int x){
    int i;
    if (x==1) return false;
    for (i=2;i<=floor(sqrt(x));i++)
        if (x%i==0) return false;
    return true;
}
