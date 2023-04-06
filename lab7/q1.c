#include <stdio.h>
#include <stdlib.h>


typedef struct Employee {
	int id;
	char name[30];
	int salary;
}Employee;
 
int main(){
	int i;
	Employee *e[3];
	
	
	for(i=0 ; i<3 ;i++){
		e[i] =(Employee *)malloc(1 * sizeof(Employee));
		printf("\nEnter Employee %d : \n",i+1);
		printf("enter id : ");
		scanf("%d",&e[i]->id);
		printf("enter name : ");
		scanf("%s",&e[i]->name);
		printf("enter salary : ");
		scanf("%d",&e[i]->salary);
		
	}
	for(i=0 ; i<3 ;i++){
		printf("\nEmployee %d \n\tid : %d \n\tName :%s \n\tsalary : %d",i+1, e[i]->id ,e[i]->name ,e[i]->salary );
	}
	
	
	return 0;
}
