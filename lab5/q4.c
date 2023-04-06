#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
	int id;
	char name[30];
	int salary;
}Employee;
 
 typedef struct Dept {
	int Did;
	char Dname[30];
	Employee emp[2];
}Dept;


int main(){
	int i;
	Dept d1;
	printf("enter Dept id : ");
	scanf("%d",&d1.Did);
	printf("enter Dept name : ");
	scanf("%s",&d1.Dname);
	
	for(i=0 ; i<2 ; i++){
		printf("enter Dept Employees %d: ",i+1);
		printf("\nenter id : ");
		scanf("%d",&d1.emp[i].id);
		printf("enter name : ");
		scanf("%s",&d1.emp[i].name);
		printf("enter salary : ");
		scanf("%d",&d1.emp[i].salary);
	}
	
	printf("\n\nDept id : %d \nDept name :%s ",d1.Did,d1.Dname);
	
	
	for(i=0 ; i<2 ; i++){
		printf("\n\nEmployees %d: ",i+1);
		printf("\nID : %d\nName : %s\nSalary : %d ", d1.emp[i].id, d1.emp[i].name , d1.emp[i].salary);
	}
	
	return 0;
}
