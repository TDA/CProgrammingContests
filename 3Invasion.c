#include<stdio.h>
#include<conio.h>
void main(){
	int ng,nm,i,gArmy[100],mgArmy[100],weakG,weakMg,gKilled=0,mgKilled=0,count;
	printf("Enter the no of test cases\n");
	scanf("%d",&count);
	do{
    printf("Enter number of monsters in Godzilla's team and Mecha Godzilla's team separated by space\n");
	scanf("%d %d",&ng,&nm);
	printf("Enter strength of monsters in Godzilla's army");
	for(i=0;i<ng;i++){
		scanf("%d",&gArmy[i]);
	}
	printf("Enter strength of monsters in Mecha Godzilla's army");
	for(i=0;i<nm;i++){
		scanf("%d",&mgArmy[i]);
	}

	while(1){
		weakG=findWeakest(gArmy,ng);
		weakMg=findWeakest(mgArmy,nm);
		if(gArmy[weakG]<mgArmy[weakMg]){
			gArmy[weakG]=-1; //killing the monster of gArmy
			gKilled++;
		}
		else{
			mgArmy[weakMg]=-1;//killing the monster of mgArmy
			mgKilled++;
		}
		if(gKilled==ng){//all monsters in GArmy dead
			printf("Mecha Godzilla wins\n");
			break;
		}
		if(mgKilled==nm){//all monsters in mgArmy dead
			printf("Godzilla wins\n");
			break;
		}


	}
	count--;
    }while(count>0);
    getch();
	return;

}
//We pass the length as a parameter for 2 reasons.One is to reduce computation.
//Two is because the length of the array can only be found in the scope its
//declared in.
int findWeakest(int army[],int length){

	int weak=0,i;
	for(i=0;i<length;i++){
		if((army[i]>=0)&&(army[i]<army[weak])){//finding weakest among alive monsters
			weak=i;
		}
	}
	return weak;
}

