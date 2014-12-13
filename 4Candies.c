#include<stdio.h>
#include<conio.h>
void main(){
        //Enter the no of kids and the candies they brought..
        //Create an array to hold the no of kids and candies they brought.
	int i,n,sum=0,t;
	printf("Enter the no of testcases\n");
	scanf("%d",&t);
	do{
	printf("Enter the number of kids\n");
	scanf("%d",&n);
	int candies[n];
	printf("Enter the number of candies brought by each kid\n");
	for(i=0;i<n;i++){
		scanf("%d",&candies[i]);
		sum=sum+candies[i];
	}
	if(sum%n==0)
		printf("YES.The candies can be equally divided\n");
	else
		printf("NO.The candies cannot be equally divided\n");
	t--;
    }while(t>0);
	getch();
}

