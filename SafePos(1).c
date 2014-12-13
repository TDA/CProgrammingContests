#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int i,n,killed=0,zeroes;
	printf("Enter the number of players\n");
	scanf("%de%d",&n,&zeroes);
	int num=n*pow(10,zeroes);//this is the actual number of players
	printf("Number of players is %d\n",num);
	int players[num];
	for(i=0;i<num;i++){
		players[i]=i+1; //assigning the position to each player.
		printf("players[%d]=%d\n",i,players[i]);
	}
	
	for(i=1;i<=num;i+=2){
		//if(players[i-1]==0){
		//	i++;
		//	continue;
		//}
		
		if(players[i]!=0){
			printf("Killed %d\n",players[i]);
			players[i]=0;//killing a player if he is alive.
			
			killed++;//Count how many ppl have been killed.
		}			
		else
		{
			while(players[i]==0){
				i++;
				if(i==num)
				i=0;
			}
			printf("Killed %d\n",players[i]);
			players[i]=0; //finding out the next alive player and killing
		
			killed++;
		}
		if(killed==num-1)
			break; //break out of loop if only one player is remaining
		if(i==num-1){//if the last person is killed
			i=-1;//so the for loop starts with next target i=1
			//printf("i = %d",i);
			continue;
		}
		if(i==num-2){//the last but one person was killed
			i=-2;//looping as a circle with i=0
			//printf("i = %d",i);
			continue;
		}
		
		
	}
	
	for(i=0;i<num;i++){
		if(players[i]!=0)
			break;//finding the player who is alive (safe position)
	}
	
	printf("Safe position is %d",players[i]);
	getch();
	return 0;
}
