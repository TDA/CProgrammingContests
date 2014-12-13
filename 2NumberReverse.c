#include<stdio.h>
#include<conio.h>
long int reverseNumber(long int num);

void main(){
     //Declared as long to accomodate larger no's and their reversals.
	long int num1,num2,revNum1,revNum2,sum;
	int count;
	//clrscr();
	printf("Enter the no of testcases\n");
	scanf("%d",&count);
	do{
    //Get the no's and store them.Perform reversal using function reverseNumber()
    //Store the reversed no's.
    printf("Enter first number : ");
	scanf("%ld",&num1);
	printf("\n");
	printf("Enter second number : ");
	scanf("%ld",&num2);
	revNum1=reverseNumber(num1);
	revNum2=reverseNumber(num2);
	sum=revNum1+revNum2;
	//Add the reversed numbers,store their sum and use reverseNumber() to
    //reverse the sum too.
    //Print the results.
	printf("Number 1 reversed : %ld\n",revNum1);
	printf("Number 2 reversed : %ld\n",revNum2);
	printf("Sum of reversed numbers : %ld\n",sum);
	printf("Reversed sum : %ld\n",reverseNumber(sum));
	count--;
    }while(count>0);
	getch();
}

long int reverseNumber(long int num){
	long int revNum=0;
	int digit=0;
	while(num!=0&&num>0){
		digit=num%10;
		revNum=revNum*10+digit;
		num=num/10;
	}
	return revNum;
}
