#include <stdio.h>
#include <stdlib.h>

int main(){
	int m1[3][3]={ {1,2,3} , {4,5,6} , {7,8,9} };
	int m2[3][3]={ {4,5,6} , {7,8,9} , {1,2,3} };
	int m3[3][3];
	
	
	int r ,c ;
	for(r = 0; r < 3; r++)
    {
        for(c = 0; c < 3; c++)
        {
            m3[r][c]= m1[r][c] +m2[r][c];
        }
    }
    
    printf("\n");
    for(r = 0; r < 3; r++)
    {
        for(c = 0; c < 3; c++)
        {
            printf("%d\t" ,m1[r][c]);
        }
        printf("\t");
        for(c = 0; c < 3; c++)
        {
            printf("%d\t" ,m2[r][c]);
        }
        printf("\t");
        
        for(c = 0; c < 3; c++)
        {
            printf("%d\t" ,m3[r][c]);
        }
        printf("\n");
    }
	
	
//	for(r = 0; r < 3; r++)
//    {
//        for(c = 0; c < 3; c++)
//        {
//            printf("%d\t" ,m3[r][c]);
//        }
//        printf("\n");
//    }
	
	return 0;
}
