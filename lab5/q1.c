#include <stdio.h>
#include <stdlib.h>
int maxNum(int x ,int y ,int z){
	
	if (x > y && x>z){
		return x;
	}else if(y > x && y > z){
		return y;
	}else{
		return z;
	}
}

int main(){
	int x ,y,z ,res;
	printf("Enter three numbers  : ");
    scanf("%d %d %d", &x,&y,&z);
    
    res=maxNum(x,y,z);
    printf("\nThe Largest Number is : %d" ,res);
    
	return 0;
}
