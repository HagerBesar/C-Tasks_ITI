#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Multiplication Table From 1:12 \n\n  ");
    int i,j;
	for( i=1 ; i<=12 ; i++){
		for(j=1 ; j<=12 ; j++){
			
			printf("%d * %d = %d\t",i,j,i*j);
			
		}
		printf("\n  ");
	}
	
	printf("\nEnter Multiplication Table of  :  ");
	int num;
	scanf("%d", &num);
	for( i=1 ; i<=12 ; i++){
		printf(" %d * %d = %d",num,i,num*i);
		printf("\n");
	}
	
	return 0;
}
