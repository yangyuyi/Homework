#include <stdio.h>
#include <string.h>
typedef struct student{
    char name[21];
    int score1;
    int score2;
    int score3;
    float ave;
}STU;
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    STU st[10];
    int i;
    int tot1=0;
    int tot2=0;
    int tot3=0;
    float av1=0;
    float av2=0;
    float av3=0;
    float av4=0;
    int min1,min2,min3,max1,max2,max3;
    for (i=0;i<10;i++){
        printf("Enter No.%d student's name & score1、2、3:\n",i+1);
        scanf("%s",st[i].name);
        scanf("%d",&st[i].score1);
        scanf("%d",&st[i].score2);
        scanf("%d",&st[i].score3);
        st[i].ave=(st[i].score1+st[i].score2+st[i].score3)/3.0;
    }
    min1=st[0].score1;
    max1=st[0].score1;
    min2=st[0].score2;
    max2=st[0].score2;
    min3=st[0].score3;
    max3=st[0].score3;
    for (i=0;i<10;i++){
        tot1+=st[i].score1;
        min1=min(min1,st[i].score1);
        max1=max(max1,st[i].score1);
        tot2+=st[i].score2;
        min2=min(min2,st[i].score2);
        max2=max(max2,st[i].score2);
        tot3+=st[i].score3;
        min3=min(min3,st[i].score3);
        max3=max(max3,st[i].score3);
    }
    av1=tot1/10.0;
    av2=tot2/10.0;
    av3=tot3/10.0;
    av4=(tot1+tot2+tot3)/30.0;
    printf("No      Name    Score1  Score2  Score3  Average\n");
    for (i=0;i<10;i++){
        printf("%-8d%-8s%-8d%-8d%-8d%-8.2f\n",i+1,st[i].name,st[i].score1,st[i].score2,st[i].score3,st[i].ave);
    }
    printf("average \t\t%-8.2f%-8.2f%-8.2f%-8.2f\n",av1,av2,av3,av4);
    printf("min \t\t\t%-8d%-8d%-8d\n",min1,min2,min3);
    printf("max \t\t\t%-8d%-8d%-8d\n",max1,max2,max3);
    return 0;
}

