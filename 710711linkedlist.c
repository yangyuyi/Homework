#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct n{
    int data;
    struct n* next;
}node;
node* create(int data);
node* add(node* head,int data,int method);
void print(node* head);
void delet(node* head);
node* insert(node* head,int position,int methed,int data);
node* del(node* head,int key);
void change(node* head,int key,int data);
int find(node* head,int key);
node* inc_add(node* head,int data);
void sort(node* head,int pattern);
int main(){
    int i=0;
    int x=0;
    node* head=create(1);
    node* h=create(2);
    node* h1=create(1);
    head=add(head,2,1);
    head=add(head,3,0);
    print(head);
    head=insert(head,1,1,0);
    print(head);
    head=insert(head,3,0,4);
    print(head);
    head=insert(head,5,0,-1);
    print(head);
    head=del(head,0);
    print(head);
    head=del(head,4);
    print(head);
    head=del(head,-1);
    print(head);
    change(head,3,10);
    print(head);
    printf("%d\n",find(head,10));
    printf("%d\n",find(head,9));
    delet(head);
    h=inc_add(h,-1);
    print(h);
    h=inc_add(h,10);
    print(h);
    h=inc_add(h,3);
    print(h);
    delet(h);
    srand((unsigned int)time(NULL));
    for (i=0;i<10;i++){
        x=rand()%100+1;
        h1=add(h1,x,0);
    }
    print(h1);
    sort(h1,0);
    print(h1);
    sort(h1,1);
    print(h1);
    return 0;
}
node* create(int data){
    node* h;
    h=(node*)malloc(sizeof(node));
    h->data=data;
    h->next=NULL;
    return h;
}
node* add(node* head,int data,int method){
    node* p;
    p=(node*)malloc(sizeof(node));
    node* q;
    if (method){
        q=head;
        while (q->next!=NULL) q=q->next;
        p->data=data;
        p->next=q->next;
        q->next=p;
    } else{
        p->data=data;
        p->next=head;
        head=p;
    }
    return head;
}
void print(node* head){
    while (head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
void delet(node* head){
    node* p;
    p=head;
    head=head->next;
    free(p);
}
node* insert(node* head,int position,int methed,int data){
    node* p;
    node* f;
    node* q;
    q=(node*)malloc(sizeof(node));
    int pos=1;
    p=head;
    f=NULL;
    while (pos!=position){
        f=p;
        p=p->next;
        pos++;
    }
    if (methed){
        if (f!=NULL){
            q->data=data;
            q->next=p;
            f->next=q;
        } else{
            q->data=data;
            q->next=head;
            head=q;
        }
    } else{
        q->data=data;
        q->next=p->next;
        p->next=q;
    }
    return head;
}
node* del(node* head,int key){
    node* p;
    node* f;
    p=head;
    f=NULL;
    while (p!=NULL){
        if (p->data==key){
            if (p==head){
                head=head->next;
                free(p);
            } else{
                f->next=p->next;
                free(p);
            }
        }
        f=p;
        p=p->next;
    }
    return head;
}
void change(node* head,int key,int data){
    node* p;
    p=head;
    while (p!=NULL){
        if (p->data==key){
            p->data=data;
        }
        p=p->next;
    }
}
int find(node* head,int key){
    node* p;
    int pos=1;
    p=head;
    while (p!=NULL){
        if (p->data==key) return pos;
        p=p->next;
        pos++;
    }
    return -1;
}
node* inc_add(node* head,int data){
    node* p;
    node* q;
    node* f;
    p=(node*)malloc(sizeof(node));
    q=head;
    f=NULL;
    while ((q!=NULL)&&(data>q->data)){
        f=q;
        q=q->next;
    }
    if (q!=head){
        p->data=data;
        f->next=p;
        p->next=q;
    } else{
        p->data=data;
        p->next=q;
        head=p;
    }
    return head;
}
void sort(node* head,int pattern){
    node* p;
    node* q;
    node* k;
    int tmp;
    p=head;
    if (pattern){
        if (p->next==NULL) return;
        while (p->next!=NULL){
            k=p;
            q=p->next;
            while (q!=NULL){
                if (k->data>q->data) k=q;
                q=q->next;
            }
            if (k!=p){
                tmp=p->data;
                p->data=k->data;
                k->data=tmp;
            }
            p=p->next;
        }
    } else{
        if (p->next==NULL) return;
        while (p->next!=NULL){
            k=p;
            q=p->next;
            while (q!=NULL){
                if (k->data<q->data) k=q;
                q=q->next;
            }
            if (k!=p){
                tmp=p->data;
                p->data=k->data;
                k->data=tmp;
            }
            p=p->next;
        }
    }
}

