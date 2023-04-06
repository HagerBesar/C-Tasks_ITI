#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Enter your number: ");
    scanf("%d", &num);
	if (num%2 == 0){
		printf("Number %d is Even" ,num);
	}else{
		printf("Number %d is Odd" ,num);
	}
	return 0;
}
