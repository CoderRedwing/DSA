#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prew;
    int info;
    struct node *next;
};
// function decleratin

void insertStart(struct node **s,int data);
void insertLast(struct node **s, int data);
void insertAfter(struct node **s ,struct node *ptr ,int data);
struct node* Find(struct node **s, int data);
int deleteFirst(struct node **s);
int deleteLast(struct node **s);
int deleteintermediate(struct node **s,struct node *ptr);
void viewlist(struct node **s);
int getFirst(struct node **s);
int getLast(struct node **s);

//function difenition
int getLast(struct node **s){
    struct node *t;
    if(*s==NULL){
        printf("list is empty");
        return(-1);
    }
    else{
        t=*s;
        while(t->next!=NULL)
        t=t->next;
        return(t->info);
    }
}
int getFirst(struct node **s){
    if(*s==NULL){
        printf("list is empty");
        return(-1);
    }
    else{
        return((*s)->info);
    }
}
void viewlist(struct node **s){
    struct node *t;
    if(*s==NULL)
    printf("List is empty");
    else{
        t=*s;
        while(t!=NULL){
            printf("%d",t->info);
            t=t->next;

        }
    }
}
int deleteintermediate(struct node **s,struct node *ptr){
  if(*s==NULL)
return(0);
if(ptr->prew==NULL){
    *s=ptr->next;
    free(ptr);
    return(1);
}  
if(ptr->next==NULL){
    ptr->prew->next=ptr->next;
    free(ptr);
    return(1);
}
}
int deleteLast(struct node **s){
  struct node *t;
if(*s==NULL)
return(0);
t=*s;
while (t->next!=NULL)
t=t->next;
if((*s)->next==NULL)
*s=NULL;
else
    t->prew->next=NULL;
    free(t);
    return(1);


}
int deleteFirst(struct node **s){
  struct node *t;
if(*s==NULL)
return(0); 
else{
    t=*s;
    *s=(*s)->next;
    (*s)->prew=NULL;
    free(t);
    return(0);
} 
}
struct node* Find(struct node **s, int data){
struct node *t;
if(*s==NULL)
return(NULL);

else{
    t=*s;
    while (t!=NULL)
    {
     if(t->info==data)
     return (t);
     t=t->next;

 }
    return (NULL);
}
}
void insertAfter(struct node **s ,struct node *ptr ,int data){
    struct node *p;
    if(ptr==NULL)
    printf("inavalid insertion");
    else{
        p=(struct node*)malloc(sizeof(struct node));
        p->info=data;
        p->prew=ptr;
        p->next=ptr->next;
        if(ptr->next!=NULL)
        ptr->next->prew=p;
        ptr->next=p;
    }
    }

void insertStart(struct node **s,int data){
struct node *p;
p=(struct node *)malloc(sizeof(struct node ));
p->info=data;
p->prew=NULL;
p->next=*s;
*s=p;
}
void insertLast(struct node **s, int data){
struct node *p,*t;
p=(struct node *)malloc(sizeof(struct node ));
p->info=data;
p->next=NULL;
if(*s==NULL){
p->prew=NULL;
*s=p;
}
else{
    t=*s;
    while(t->next!=NULL)
    t=t->next;
    p->prew=t;
    t->next=p;
}
}
int main(){
    struct node *ptr;
    struct node *start=NULL;
    insertStart(&start,10);
    viewlist(&start);
}
