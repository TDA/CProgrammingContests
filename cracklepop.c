#include<stdio.h>
#include<conio.h>

void main(){
     int i;
     for(i=1;i<101;i++){
                        
                                  if( i%15==0)
                                       printf("CracklePop\n");
                                  else if( i%5==0)
                                       printf("Pop\n");
                                  else if( i%3==0)
                                       printf("Crackle\n");
                                  else 
                                       printf("%d\n",i);
                                       }
                        
                        getch();
}               
