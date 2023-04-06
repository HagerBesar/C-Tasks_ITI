#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[40];
	char str2[40];
	int index = 0;
	gets(str1);
	
    while(str1[index] != '\0')
    {
        str2[index] = str1[index];
        index++;
    }
	printf("copy = %s",str2);
	return 0;
}
