#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[40];
	int index = 0 ;
	gets(str1);
	
    while(str1[index] != '\0')
    {
        index++;
    }
	printf("Length  = %d",index);
	return 0;
}
