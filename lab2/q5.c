#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	do{
		printf(" Menu : \n\n 1- Python \n 2- C++ \n 3- Java \n 4- Dart \n");
		printf("\n Choose from number menu : ");
	    
		scanf("%d", &num);
	    system("cls");
	    
		switch(num)
	    {
	    	
	        case 1:
	        	printf("\n Python \n ");
	            break;
	        case 2:
	            printf("\n C++ \n ");
	            break;
	        case 3:
	            printf("\n Java \n ");
	            break;
	        case 4:
	            printf("\n Dart \n ");
	            break;
	        default:
	            printf(" WRONG NUMBER \n ");
	            break;
	            
	    }
	    scanf("%d", &num);
	    system("cls");
	}while(num);
	
	return 0;
}
