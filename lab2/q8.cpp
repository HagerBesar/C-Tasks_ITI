#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
//	A=65 Z=90 a=97 z=112 space= 32

	char s []= "hager mohamed";
	
	int ch=0, w=0;
	int x,b;
	x=sizeof(s);
	b=strlen(s);
//	printf("%d",b);
	int i;
	for (i=0 ; i<b; i++){
		if ((s[i] >= 65 && s[i] <= 90) || (s[i]>= 97 && s[i] <= 122)){
			ch++;
		}else if(s[i] = 32){
			w++;
		}
	}
	
	printf("num of Alphabets = %d",ch);
	printf("\nnum of words = %d",w+1);
	
//	printf("ASCII number of '%c' =  %d",s[16],s[16]);
	return 0;
}
