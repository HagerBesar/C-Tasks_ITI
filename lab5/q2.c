#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Employee {
	int id;
	char name[30];
	int salary;
}Employee;
 
int main(){
	Employee e1,e2;
	printf("enter id : ");
	scanf("%d",&e1.id);
	printf("enter name : ");
//	gets(e1.name);
	scanf("%s",&e1.name);
	printf("enter salary : ");
	scanf("%d",&e1.salary);
	e2=e1;
	printf("\nID : %d\nName : %s\nSalary : %d", e2.id, e2.name , e2.salary);
	return 0;
}
