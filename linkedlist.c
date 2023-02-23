#include<stdio.h>
#include<stdlib.h>
int insertNode();
void viewlist();
int main()
{
  int choice;

  while(1)
  {
    printf("1.Insert \n");
    printf("2.view \n");
    printf("3.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      insertNode();
      break;
      case 2:
      viewlist();
      break;
      case 3:
      exit(0);
      default :
      printf("You Entered wrong choice");
    }
  }
}
  struct node
  {
    int info;
    struct node *link;
  };
  struct node *START=NULL;
  struct node *createNode(){
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return(n);

  }
  int  insertNode()
  {
    struct node *temp,*t;
    temp =createNode();
    printf("enter a number ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
    START=temp;
     else
     {
      t=START;
      while(t->link!=NULL)
      {
         t=t->link;
      }
     } 
     t->link=temp;
     return 0;
  }
void viewlist()
{
  struct node *t;
  t=START;
  printf("Entered data \n");
  while(t!=NULL)
  {
    printf( "%d ",t->info);
    t=t->link;
  }
  printf("\n");
}
        

  
  
   
