#include<stdio.h>
int main (){
    int n,x,rev=0,s=0,r;
    printf("enter the number ");
    scanf("%d",&n);
    if(n!=0){
      r=n%10;
      rev=rev*10+r;
      s=s+r;
      n=n/10;
    }
    printf("%d %d %d",s,n,rev);
}