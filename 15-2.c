#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}LNODE;
LNODE* createList(int n);
int getElem(LNODE* h,int k);
void output(LNODE* h);
void del(LNODE* h);
LNODE* insertElem(LNODE* h,int k,int x);
LNODE* deleteElem(LNODE* h,int k);
int main(){
    int n=0;
    int key=0;
    int x=0;
    int a[210];
    int i;
    LNODE* h;
    scanf("%d",&n);
    h=createList(n);
    scanf("%d",&key);
    printf("%d\n",getElem(h,key));
    output(h);
    scanf("%d%d",&key,&x);
    h=insertElem(h,key,x);
    output(h);
    scanf("%d",&key);
    h=deleteElem(h,key);
    output(h);
    del(h);
    return 0;
}
LNODE* createList(int n){
    int i;
    LNODE *p,*h=NULL,*r=NULL;
    for (i=0;i<n;i++){
        p=(LNODE*)malloc(sizeof(LNODE));
        p->data=i+1;
        p->next=NULL;
        if (h==NULL){
            h=p;
            r=p;
        } else{
            r->next=p;
            r=p;
        }
    }
    return h;
}
int getElem(LNODE* h,int k){
    int i=1;
    while (i<k){
        h=h->next;
        i++;
    }
    return h->data;
}
void output(LNODE* h){
    while (h!=NULL){
        printf("%d ",h->data);
        h=h->next;
    }
}
void del(LNODE* h){
    LNODE* p;
    while (h!=NULL){
        p=(LNODE*)malloc(sizeof(LNODE));
        p=h;
        h=h->next;
        free(p);
    }
}
LNODE* insertElem(LNODE* h,int k,int x){
    LNODE *p,*q;
    int i=1;
    p=h;
    while (i<k){
        p=p->next;
        i++;
    }
    q=(LNODE*)malloc(sizeof(LNODE));
    q->data=x;
    if (k==0){
        q->next=h;
        h=q;
    } else {
        q->next=p->next;
        p->next=q;
    }
    return h;
}
LNODE* deleteElem(LNODE* h,int k){
    LNODE *p,*f;
    int i=1;
    p=h;
    while (i<k){
        f=p;
        p=p->next;
        i++;
    }
    if (p==h)
        h=h->next;
    else f->next=p->next;
    return h;
}
