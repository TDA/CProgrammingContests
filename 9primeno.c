#include<stdio.h>
#include<conio.h>
// It is a known fact that any number can be expressed as a product of primes
// So all we have to do is output the last number in the range. This will
// be the largest no,expressible as a product of primes :)
//Variables have been declared optimally to reduce memory requirement while 
//Being able to hold upto 1e12 magnitude values.
void main(){
long long int i,j;
int n,k=0;
printf("\n Enter the no of test cases");
scanf("%d",&n);
for(k=0;k<n;k++)
{
printf("\n Enter the test case ");
scanf("%lld %lld",&i,&j);
printf("The largest no which can be expressed as product of primes is %lld",j); 
}
getch();
}
