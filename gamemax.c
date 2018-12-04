#include<stdio.h>
void main()
{
   printf("RULES:\n We have 21 matchsticks a user can choose 1 t0 4 number of matchsticks at a time.\nThe one who choose the last one is a looser");
   int mat ,tr,x;
   mat=21;
   x=0;
   while(1){
     printf("\nIts your turn;choose matchsick 1 to 4\n");
     turn:scanf("%d",&tr);
		fflush(stdin);
           if(tr<1||tr>4){
		printf("\nWrong turn re-enter\n");
	//	fflush(stdin);
		goto turn;
	   }
           printf("You Choose\n");
           for(int k =1;k<=tr;k++,mat--)
		printf(" %d ",++x);
          if(mat<=0)
            {printf("\nYOU LOOSE!!\n");
               break;}
//computer turn
       printf("\nComputer turn\n");
       for(;x%5!=0;mat--)
	 printf(" %d ",++x);
//++x;
//mat--;
//printf(" %d ",x);
if(mat<=0){
printf("\nComputer Loose!!\n");
break;
}
}
}
