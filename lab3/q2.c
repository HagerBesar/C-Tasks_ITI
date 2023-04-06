#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[4],i,max;
	printf("Enter array 4 num: ");
    
	for(i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max= arr[0];
    
    for(i = 0; i < 4; i++)
    {
        if(max <arr[i]){
        	max=arr[i];
		}
    }
    
    printf(" MAX = %d",max);
	return 0;
}
