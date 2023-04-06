#include <stdio.h>
#include <stdlib.h>

int main(){
	int x ,y,z;
	printf("Enter three numbers  : ");
    scanf("%d %d %d", &x,&y,&z);
    
	if (x > y && x>z){
		printf("Number(1) %d is Largest" ,x);
	}else if(y > x && y > z){
		printf("Number(2) %d is Largest" ,y);
	}else{
		printf("Number(3) %d is Largest" ,z);
	}
		
	return 0;
}
