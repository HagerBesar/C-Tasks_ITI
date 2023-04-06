#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=3;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int magic[3][3];
	int sum = n*(n*n +1)/2 ;
	//d1 //d2
	int i,j;
	for(i=0;i<3;i++){
		magic[i][i]= arr[1][i];
		if(i==0){
			magic[0][2]= arr[i][1];
		}else if (i==2){
			magic[2][0]= arr[i][1];
		}
	}
	
	//c 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i==0 || i==2) && j==1){
				magic[i][j]= sum-(magic[i][j-1] +magic[i][j+1]);
			}
			if(i==1 && (j==0 || j==2)){
				magic[i][j]= sum- (magic[i-1][j] +magic[i+1][j]);
			}
		}
	}
	
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t" ,magic[i][j]);
        }
        printf("\n");
    }
	return 0;
}
