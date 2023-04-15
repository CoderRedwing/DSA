#include<stdio.h>
#include<conio.h>
# define MAX 50
int stack [MAX+1], top=0;
void main (){
    clrscr();

}
void create(){
    char ch;
    do{
        top++;
        printf("input Element");
        scanf("%d",stack[top]);
        printf("Press <Y> for more element \n");
        ch = getch();
    }
}