#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main(){
//	char str1[100];
//    char str2[100];
//    printf("Enter your string : "); 
//    gets(str1);
//    
//	int index = 0;
//    while(str1[index] != '\0'){
//	    if(str1[index] >= 'a' && str1[index] <= 'z'){
//	    	str2[index] = str1[index];
//	    }
//        index++;
//    }
//    
//    printf("result : %s",str2);
//    printf("result : %d",index);
//	return 0;
//}

int main(){
	char str1[100];
    printf("Enter your string : "); 
    gets(str1);
    
	int index = 0,i;
    while(str1[index] != '\0'){
	    if(str1[index] >= 'a' && str1[index] <= 'z'){
	    	index++;
	    }else{
	    	for(i=index;i<strlen(str1);i++){
	    		str1[i]=str1[i+1];
			}
		}
    }
    
    printf("result : %s",str1);
    printf("\nresult : %d",index);
    
	return 0;
}
