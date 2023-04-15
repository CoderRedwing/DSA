#include<stdio.h>
#include<stdlib.h>
void insertNode();
void viewList ();
void deleteNode();
void deleteSpecificNode();

struct node
{
  int info;
  struct node *next; 
};
struct node *start=NULL;

struct node*createNode(){
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return (p);  
}
void insertNode(){
 struct node *n,*ptr;
 n=createNode();
 printf("enter the value- ");
 scanf("%d",&n->info);
 if(start==NULL){
  start=n;
 }
 else{
   ptr=start;
   while (ptr->next!=NULL)
   {
    ptr=ptr->next;
   }
   ptr->next=n;
     
 }   
}
void viewList (){
  struct node *ptr;
    ptr=start;
    while (ptr!=NULL)
    {
       printf("%d",ptr->info);
       ptr=ptr->next;
       printf("\n");
}
      
    }
    
   void deleteNode(){
    struct node *ptr,*t;
    ptr=start;

    if(start==NULL){
      printf("please insert a node first\n");
    }
    else{
      t=ptr->next;
      start=t;
      printf("Deleted %d ",ptr->info);
      free(ptr); 
    }
   }
   void deleteSpecificNode(){
    int data;
    struct node *ptr,*p,*t;
    if (start==NULL)
    {
      printf("please insert a node first\n");
    }
    else{
     ptr=start;
     printf("please enter data you want to delete-");
     scanf("%d",&data);
    while (ptr->info!=data)
    {
     p=ptr;
     ptr=ptr->next; 
    }
    p->next=ptr->next;
    printf("Deleted %d ",ptr->info);
    free(ptr);
    }
    
    
   }
int main(){
  int choice;

  while(1)
  {
    printf("\n1.Insert \n");
    printf("2.view \n");
    printf("3.deleteNode\n");
    printf("4.deleteSpecificNode\n");
    printf("5.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      insertNode();
      break;
      case 2:
      viewList();
      break;
      case 3:
      deleteNode();
      break;
      case 4:deleteSpecificNode();
      break;
      case 5:
      exit(0);
      default :
      printf("You Entered wrong choice");
    }
  }
}



