#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int stu,sub,i,j ,sum=0 ,avg=0;
	printf("enter num of student : ");
	scanf("%d",&stu);
//	printf("enter num of subject: ");
//	scanf("%d",&sub);
	
	int **arr = (int **) malloc (stu * sizeof(int *));
	
	for (i=0 ; i<stu ; i++){
		printf("enter num of subject of student %d ",i+1 );
		scanf("%d",&sub);
		arr[i]= (int *) malloc(sub * sizeof(int *));
		for( j=0 ; j<sub ; j++){
			printf("Degrees OF Subjects%d : ",j+1);
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		printf("\n\tSUM = %d \n",sum);
		sum=0;
	}
	
	
}
