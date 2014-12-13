#include<stdio.h>
void main(){
	int n,count;
	int i,stone[1000],loop=0;
	printf("Enter the number of test cases : ");
	scanf("%d",&count);
	do{
	printf("Enter the number of stone piles : ");
	scanf("%d",&n);
	printf("Enter the number of stones in each pile separated by space\n");
	for(i=0;i<n;i++){
		scanf("%d",&stone[i]);
	}
	while(1){
		for(i=0;i<n;i++){
			if(stone[i+1]>=(i+1)){
				stone[i+1]=stone[i+1]-(i+1);//removing i stones from i th pile
				loop++;//to determine who wins
				break;
			}
		}
		if(i==n)//if the for loop has terminated without success (no stones removed)
			break;

	}

	/* Since game starts with Alice, odd loop = Alice's turn and even loop = Bob's turn */
	if(loop%2==0)//Check whose turn
		printf("Bob wins\n");
	else
		printf("Alice wins\n");
		
    count--;
    }while(count>0);
    getch();
	return;
}


