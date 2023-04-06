#include <stdio.h>
#include <stdlib.h>
void swap(int *x ,int *y){
	int temp =*x;
	*x = *y;
	*y= temp;
}

int main(){
	int x,y;
	printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);
	swap(&x,&y);
	
	printf("x = %d \ny = %d",x,y);
	return 0;
}
