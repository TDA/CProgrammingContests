#include<stdio.h>
#include<conio.h>
int main(){
     int i=0;
     long long int sum=0,c=0,a=-1,b=1;
     do
     {
                        c=a+b;
                        //printf("%d",c);
                        if(c%2==0)
                        sum+=c;
                        a=b;
                        b=c;
     }while(c<4000000);
                        
     printf("%lld\n",sum);
     getch();
     }
