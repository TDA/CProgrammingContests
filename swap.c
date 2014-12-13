#include<stdio.h>
#include<conio.h>
void main(){
     int i,j;
     printf("enter the nos\n");
     scanf("%d\n%d",&i,&j);
     i=i^j;
     j=j^i;
     i=i^j;
     printf("%d %d",i,j);
     getch();
}
