#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
unsigned long int n;
printf("\nEnter the number of numbers");
scanf("%ld",&n);
unsigned long int numbers[n],sum[n];
//To prevent garbage values
for(i=0;i<n;i++)
{
sum[i]=1;
numbers[i]=0;
}
// Get and store the numbers
printf("\n Enter the numbers\n");
for(i=0;i<n;i++)
	scanf("%ld",&numbers[i]);
//Check and find the proper divisors and add it
//Store it in sum[].
//We save (n/2)-1 calculations since no number beyond n/2 is a proper divisor
//of n.Also there is no need to compute for 1 as all numbers are divisible by 1
//So we initialize sum[] to 1
//This increases the running efficiency by a factor of n/2 :) 
for(i=0;i<n;i++)
	for(j=2;j<=(numbers[i]/2);j++)
		{
		if(numbers[i]%j==0)	
		sum[i]+=j;
		}
		
		
printf("\nThe sum of the Proper Divisors are:\n");
//Output the results
for(i=0;i<n;i++)
printf("%ld\n",sum[i]);

getch();
}
