//here we can do multiple operation on an array
#include<stdio.h>
int main (){
    int a[50],size,choice,num,pos,i,n;


    //***Traversal of the array 
     
    printf("choose an operation \n1- Traversal of the array \n 2- Insertion in array \n3- Deletion in array \n 4- Exit \n ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("enter the size of the array-");
         scanf("%d",&size);
        printf("enter the element of the array- ");
        for( i=0; i<size; i++)
       {
        scanf("%d",&a[i]);
    }
        printf(" element are in  the array ");
        for( i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }




       // *** insertion in the array 
    case 2:
        printf("enter the size of the array-");
         scanf("%d",&size);
        printf("enter the element of the array- ");
        for(int i=0; i<size; i++)
       {
        scanf("%d",&a[i]);
    }

        printf("enter element you want to insert-");
        scanf("%d",&num);
         printf("enter the position-");
         scanf("%d",&pos);
         if(pos>=0 || pos<=size+1){
            for(i=size-1; i>=pos-1; i--){
                a[i+1]=a[i];
            }
            a[pos-1]=num;
            size++;
            printf(" element are in  the array \n");
         for( i=0; i<size; i++)
       {
        printf("%d\n",a[i]);
       }
         }else
            printf("choice is wrong");

         // ** deletion of the array


          case 3:
                 printf("enter the size of the array-");
                 scanf("%d",&size);
                 printf("enter the element of the array- ");
                 for(int i=0; i<size; i++)
       {
                  scanf("%d",&a[i]);
    }  
                 printf("enter the position you want to delete the element-");
                scanf("%d",&pos);
                if(pos>=0 || pos<=size+1){
                 for(i=pos-1; i<=size-1; i++){
                a[i]=a[i+1];
                }
                
                size--;
               printf(" element are in  the array \n");
              for( i=0; i<size; i++)
       {
             printf("%d\n",a[i]);
       }
        
            }else{
           printf("choice is wrong");
            }
            
         case 4:
         printf("Exit");
    
    }
     

    }
