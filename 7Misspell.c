#include<stdio.h>
#include<string.h>
void main(){
	int i=0,j,n,k,count,len;
	printf("Enter the no of test cases\n");
	scanf("%d",&n);
	char word[80],newWord[80];
	for(k=0;k<n;k++)
    {
    printf("Enter the input in the format 'number space word'\n");
	scanf("%d %s",&count,&word);
	while(i<count-1){
		newWord[i]=word[i];
		i++;
	}
	//We skip over only the letter required.
	//Then we form the rest of the word using another loop.
	//Here strlen(word) is computed once instead of computing it n times
	//Improves efficiency by factor of n-1
	for(j=i+1,len=strlen(word);j<len;j++){
		newWord[j-1]=word[j];
	}
	newWord[j-1]='\0';
	printf("Misspelt word is %d %s\n",k+1,newWord);
	//Reset i for the next computation,else we will be overwriting the same
	//contents of word.
	i=0;
	}
	getch();
	return;
}
