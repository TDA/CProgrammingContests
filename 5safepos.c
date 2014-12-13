#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{   //Due to Operating System constraints and GCC compiler memory limits,values
    //upto 05e5 are computed perfectly.Higher values result in the System
    // hanging. Use with caution :)
	unsigned long int killed=0,num=0;
	long int i;
	int n,zeroes,pk=0;
	do{
	printf("Enter the number of players\n");
	scanf("%de%d",&n,&zeroes);
	if(n==0) break;
	num=n*pow(10,zeroes);//this is the actual number of players
    printf("Number of players is %ld\n",num);
	long int players[num];
	//Create an array to hold the player no's.
	for(i=0;i<num;i++){
		players[i]=i+1; //assigning the position value to each player.
		}
	//Loop through the players and check if the player is dead or not.
	for(i=0;i<num;i++)
	{//Skip the players who are dead.
     while(players[i]==0)
     {
     i++;
     if(i==num)
     i=0;
     }
     //If not dead,then make a count of how many ppl we have passed,if its the 
     //2nd person(alternate person),then he is killed and we repeat the process.
     
     if(players[i]!=0)
     {
     pk++;
     if(pk==2)
     {                
     players[i]=0;
     killed++;
     pk=0;
     }
     //Reset the var i to repeat the loop once we reach the end of array.
     if(i==num-1)
     i=-1;
     }
     //Check if all but one person is killed,if so,we are done.
     if(killed==num-1)
     break;
     
     
    }
    //Compute safe position.	
	for(i=0;i<num;i++){
		if(players[i]!=0)
			break;//finding the player who is alive (safe position)
	}
	//Display the safe position :)
	printf("Safe position is %d\n",players[i]);
	//Clear all variables for next number
	for(i=0;i<num;i++)
	players[i]=0;
    i=num=killed=0;
	
    }while(n!=0);
	getch();
	return 0;
}
