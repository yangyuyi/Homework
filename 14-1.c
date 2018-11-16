#include <stdio.h>
#include <string.h>
typedef struct student{
    int student_ID;
    char name[21];
    char gender[10];
    float score;
}STU;
int main(){
    int i;
    int numm=0,numf=0;
    float totm=0,totf=0;
    STU st[6];
    for (i=0;i<6;i++) {
        scanf("%d",&st[i].student_ID);
        scanf("%s",st[i].name);
        getchar();
        scanf("%s",st[i].gender);
        getchar();
        scanf("%f",&st[i].score);
    }
    for (i=0;i<6;i++){
        if (!strcmp(st[i].gender, "male")){
            numm++;
            totm+=st[i].score;
} else{
numf++;
totf+=st[i].score;
}
}
printf("%.2f\n",totm/numm);
printf("%.2f\n",totf/numf);
return 0;
}

