#include <stdio.h>
#include <stdlib.h>

int main(){
	int m[3][3]={ {1,2,3} , {4,5,6} , {7,8,9} };
	int sum=0 , avr;
	
    int r ,c ;
	for(r = 0; r < 3; r++)
    {
        for(c = 0; c < 3; c++)
        {
            sum+=m[r][c];
        }
    }
    
    avr=sum/9;
    printf(" Sum = %d\n",sum);
    printf(" Average  = %d",avr);
	return 0;
}
