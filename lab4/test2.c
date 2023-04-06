#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[100];
    printf("Enter your string : "); 
    gets(str);
    
	int i = 0,c=0;
    while(str[i] != '\0'){
    	
	    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
	    	i++;
	    	continue;
	    }else{
	    	str[i]=str[i+1];
	    	c=i+1;
	    	while(str[c] != '\0'){
	    		str[c]=str[c+1];
	    		c++;
			}
			str[c]='\0';
	    	i++;
		}
    }
    
    printf("\nresult : %s",str);
    printf("\nresult : %d",i);
	return 0;
}
