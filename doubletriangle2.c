#include<stdio.h>
#include<conio.h>
void main(){
     int i=1,j,k=1;
     for(;;)
     {     
         for(j=1;j<=i;j++){
             if(i==4){
             continue;
             }
             //im j : 
             printf("%d\t",j+((i-1)*(i)/2));
             }
         printf("\n");
         if(i>3)
         k=-1;
         if(i==0)
         break;
         
         i+=k;
         }
     //printf("separator\n");
     /*for(;;)
     {   
         
         for(j=1;j<=i;j++){
             printf("im j : %d\t",j+((i-1)*(i)/2));
             }
         printf("\n");
         
         if(i>=1)
         i--;
         else
         break;
     }
     */
     getch();
}
