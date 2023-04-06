#include <stdio.h>
#include <stdlib.h>

int main(){
	char degree;
	printf("Enter your degree : ");
//    scanf("%c", &degree);
    degree=getche();
	switch(degree)
    {
        case 'A':	
        	printf("\nExcellent");
            break;
        case 'B':
            printf("\nVery Good");
            break;
        case'C':
            printf("\nGood");
            break;
        case 'D':
            printf("\nfair");
            break;
        case 'E':
            printf("\nfailed");
            break;
        default:
            printf("WRONG DEGREE");
            break;
            
    }
	return 0;
}
