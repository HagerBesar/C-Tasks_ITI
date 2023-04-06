#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int stu,sub,i,j ,sum=0 ,avg=0;
	printf("enter num of student : ");
	scanf("%d",&stu);
	printf("enter num of subject: ");
	scanf("%d",&sub);
	
	int **arr = (int **) malloc (stu * sizeof(int *));
	
	for (i=0 ; i<stu ; i++){
		arr[i]= (int *) malloc(sub * sizeof(int *));
		printf("\nEnter subjects degrees of student %d : \n",i+1);
		for( j=0 ; j<sub ; j++){
			printf("Enter Subjects%d : ",j+1);
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		printf("\n\tSUM = %d \n",sum);
		sum=0;
	}
	
	for (i=0 ; i<sub ; i++){
		printf("\n Student %d : ",i+1);
		for( j=0 ; j<stu ; j++){
			sum+=arr[j][i];
		}
		avg=sum/sub;
		printf("\ntAverage of Subjects%d = %d \n",i+1,avg);
		sum=0;
	}
	
}
