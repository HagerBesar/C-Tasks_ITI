#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[6],i;
	printf("Enter array 6 num: ");
    
	for(i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    
	return 0;
}
