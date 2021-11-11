#include<stdio.h>
int main(){
	
	int r=1,a,i=0;

	printf("Bienvenu !\ns'il vous plais répendez au questions suivants\n");
	
	
	
	
	//methode 1:
	while(r<4){


	switch(r){
		case 1:
			{ r++;
				printf("QST 1: 1+1 = \n 2 or 3\n");
				scanf("%d",&a);
				if(a==2){
					i++;
					printf("oui +1");}
					else{
						printf("no is 2\n");
					}
					break;
			}
			case 2:
				{	 r++;
					printf(" QST 2 : 2+3 =\n 9 or 5\n");
					scanf("%d",&a);
					if(a!=5){
						printf("+0 NO is 5 \n");
					}
					else {
						printf("+1 YES is 5\n");
						i++;
					}
					break;
				}
			case 3:{ r++;
				printf("QST 3 : 5+4 = \n 5 or 9\n");
				scanf("%d",&a);
				if(a==9){
					printf("+1 YES is 9\n");
					i++;
				}
				else{
					printf("+0 NO is 9\n");
				}
			break;
			}
			
				
	}}	
		printf ("your result is %d\n",i);
		if (i<1){
			printf(":) NULL");
		}
		else if(i<3){
			printf("moyenne");
		}
		else if(i==3){
		printf("greate");
		}
//	****************************************************************

////methode 2	//qst
//	
//	printf("Qst1 : 1+1 = \n 2 or 3 ");
//	scanf("%d",&a);
//	
//	if(a==2){
//		printf("+1 : YES is 2 \n  ");
//		i++;
//	}
//	else {
//		printf("+0  : NO is 2\n ");
//	}
//	
//	
//	
//	printf("Qst2 : 1+2 = \n 3 or 8\n");
//	scanf("%d",&a);
//	
//	if(a==3){
//		printf("+1 : YES is 3 \n ");
//		i++;
//	}
//	else {
//		printf("+0  : NO is 3\n ");
//	}
//	
//	printf("qst 3 : 2+3 = \n 5 or 9\n");
//	scanf("%d",&a);
//	if(a==5){
//		i++;
//		printf("+1 : YES is 5\n");
//	}
//	else{
//		printf("+0 : NO  is 5");
//	}
//	
//	//result
//	printf("\nYou're result is %d\n",i);
//	if(i<1){
//		printf("null");
//	}
//	else if(i<3){
//		printf("moyenne");
//	}
//
//	else if (i<4){
//	printf("excelent");
//	}

	
	
}
