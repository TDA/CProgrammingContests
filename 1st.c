#include<stdio.h>
#include<conio.h>
void main(){
int n,t,i,k,disp;
char **sub;
printf("\nEnter the no of testcases and the no.of shelves");
scanf("%d\n%d",&t,&n);
for(i=0;i<t;i++){
printf("\nEnter the subs\n");
                for(k=0;k<n;k++){
                scanf("%s",&sub[k]);
                }
printf("\nEnter the displacement\n");
scanf("%d",&disp);

		  for(k=1;k<n;k++)
		  {
		  char *temp=sub[k];
		  sub[k]=sub[(k+disp)%t];
		  sub[(k+disp)%t]=temp;
		  printf("\n%s",sub[k]);
		  }

}
getch();
}
