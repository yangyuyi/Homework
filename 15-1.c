#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}LNODE;
LNODE* create(int a[],int n);
void print(LNODE* h);
int main(){
    int n=0;
    int a[210];
    int i;
    LNODE* h;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    h=create(a,n);
    print(h);
    return 0;
}
LNODE* create(int a[],int n){
    int i;
    LNODE *p,*h=NULL,*r=NULL;
    for (i=0;i<n;i++){
        p=(LNODE*)malloc(sizeof(LNODE));
        p->data=a[i];
        p->next=NULL;
        if (h==NULL){
            h=p;r=p;
        } else{
            r->next=p;
            r=p;
        }
    }
    return h;
}
void print(LNODE* h){
    while(h!=NULL){
        printf("%d ",h->data);
        h=h->next;
    }
}
