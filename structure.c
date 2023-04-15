#include<stdio.h>
void linkfloat();
int main(){

    struct book
    {
       char name[10]; 
       float price; 
       int pages;
    };
    
   /* struct book b[10];
    int j; int dh;
    for(int i=0; i<1; i++){
        printf("enter name price and pages \n");
        scanf("%c%f%d",&b[i].name,&b[i].price, &b[i].pages);
        while ((dh=getchar())!='\n');
        
    }
    for(int i=0; i<=1; i++)*/
       struct book b1 ={"Basic",120,550};
       struct book b2 ={"physics",130,300};
       struct book b3 ={0};
    
  
}