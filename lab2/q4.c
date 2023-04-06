#include <stdio.h>
#include <stdlib.h>

int main(){
	int sum=0;
	int num;
	
	while(sum<100){
		printf("Enter number: ");
	    scanf("%d", &num);
		sum+=num;
	}
	
	printf("sum = %d", sum);
   
	return 0;
}
