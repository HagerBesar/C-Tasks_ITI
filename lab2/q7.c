#include <stdio.h>
#include <stdlib.h>

int main(){
	char c;
	printf("Enter your Character: ");
	scanf("%c", &c);
//    c = getche();

  	
//  	A=65 Z=90 a=97 z=112

	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        printf("\nCharacter %c is an Alphabet" ,c);
    }else{
        printf("\nCharacter %c is not an Alphabet" ,c);
    }
       
 
 
 
	return 0;
}
