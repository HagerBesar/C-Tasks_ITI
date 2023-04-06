#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
	int id;
	char name[30];
	int salary;
}Employee;
 
int main(){
	Employee emp[3];
	int i;
	for(i=0 ; i<3 ; i++){
		printf("\nEnter data of Employee  %d ",i+1);
		printf("\n id : ");
		scanf("%d",&emp[i].id);
		printf(" name : ");
		scanf("%s",&emp[i].name);
		printf(" salary : ");
		scanf("%d",&emp[i].salary);
	}
	
	printf("\n ID \tName \tSalary \n");
	for(i=0 ; i<3 ; i++){
			printf("\n %d \t%s \t%d \n", emp[i].id, emp[i].name , emp[i].salary);
	}
	
	return 0;
}
