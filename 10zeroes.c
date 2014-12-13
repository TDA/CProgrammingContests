#include<stdio.h>
#include<conio.h>
unsigned long long int facto(unsigned long int n)
{
     if(n==0)
     return 1;
     else
     return (n*facto(n-1));
}


//Assuming the no of zeroes cannot exceed 64000 and cant be negative.
unsigned int zero(unsigned long long int x)
{
   unsigned int zeroes=0; 
   while(x/10!=0)
   {     
   if(x%10!=0)
   break;
   else
   {
   x=x/10;
   zeroes++;
   }      
   }                        
   return zeroes;      
}

void main(){
//Factorials can only be computed for non-negative integers
long int t=0,i=0;
printf("\nEnter the number of numbers ");
scanf("%ld",&t);
unsigned long int num[t];
unsigned long long nfact[t];
unsigned int zfact[t];
printf("\nEnter the numbers ");
for(i=0;i<t;i++)
scanf("%ld",&num[i]);
//Calc the factorial for the numbers and store it.
//Display the factorial and the no of zeroes in it.
for(i=0;i<t;i++)              
{
                              nfact[i]=facto(num[i]);
                              zfact[i]=zero(nfact[i]);
                              printf("\nFactorial of %ld  is %lld",num[i],nfact[i]);
                              printf("\nNumber of zeroes in %ld ! is %d",num[i],zfact[i]);
}
// Due to limitations of memory, i have declared the numbers as long long only..
//this allows the computation of factorials upto the number 20.If higher
// factorials are needed to be calculated,simply declare the nfact[] as long
// long long and so on...making the necessary changes in declarations :)
//Pls note that the gcc compiler doesnt allow beyond long long :)
getch();
}



