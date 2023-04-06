#include <stdio.h>
#include <stdlib.h>
void multFun(int *array,int size){
	int i;
	for(i=0 ; i<size ; i++){
		array[i] = array[i] * 10;
//		*(array+i)= *(array+i) * 10;
	}
}

int main(){
	int a[4],i;
	printf("Enter array of int : ");
	
	for(i=0 ; i<4 ; i++){
		scanf("%d",&a[i]);
	}

	multFun(a,4);
	
	printf(" array * 10 : ");
	for(i=0 ; i<4 ; i++){
		printf("%d,",a[i]);
	}
	
	return 0;
}
