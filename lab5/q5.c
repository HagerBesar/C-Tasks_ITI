#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
	int id;
	char name[30];
	int salary;
}Employee;
 
 Employee AddEmployee(){
	Employee e;
	printf("enter id : ");
	scanf("%d",&e.id);
	printf("enter name : ");
	scanf("%s",&e.name);
	printf("enter salary : ");
	scanf("%d",&e.salary);
	return e;
 }
 void DisplayEmployee(Employee e1){
 	printf("\nID : %d\nName : %s\nSalary : %d", e1.id, e1.name , e1.salary);
 }
int main(){
	Employee e1;
	
	e1=AddEmployee();
	
	DisplayEmployee(e1);
	
	
	return 0;
}
