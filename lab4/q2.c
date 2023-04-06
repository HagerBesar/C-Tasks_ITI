#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[100];
    int alph[26]={} , ch;
    
    printf("Enter your string : "); 
    gets(str);
    
	int index = 0;
    while(str[index] != '\0'){
	    if (str[index] >= 'a' && str[index] <= 'z'){
	    	ch = str[index]- 'a';
	        alph[ch]++;
	    }
        index++;
    }
    
	int c;
	for (c = 0; c < 26; c++){
		if(alph[c]!=0)
			printf("%c  ===>  %d times \n", c+'a', alph[c]);
	}
   
	return 0;
}
