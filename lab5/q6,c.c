#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define up 72
#define down 80
#define home 71
#define end 79
#define enter 13
typedef struct Employee {
	int id;
	char name[30];
	int salary;
}Employee;

void DisplayEmployee(Employee emp[3]){
	printf("\n ID \tName \tSalary \n");
	int i;
	for(i=0 ; i<3 ; i++){
			printf("\n %d \t%s \t%d \n", emp[i].id, emp[i].name , emp[i].salary);
	}
 }
 
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
void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}


int main(){
	Employee emp[3]={};
	int count=0;
	int select=1,i;
	char ch,r;
	char menu[3][10]={"ADD","Display","Exit"};
	printf("START");
	
	do{
		r = getch();
	    system("cls");
		select=0;
		do{
			system("cls");
			for(i=0 ; i<3 ; i++){
				if(i==select){SetColor(10);}
				printf("\n - %s \n",menu[i]);
				SetColor(15);
			}
			
			ch = getch();
			if(ch == -32){
				ch = getch();
				if(ch==up){
					if(select!=0){select-=1;}else{select=2;}
				}else if(ch==down){
					if(select!=2){select+=1;}else{select=0;}
				}else if(ch==home){
					select=0;
				}else if(ch==end){
					select=2;
				}
			}
		}while(ch!=enter);
		system("cls");
		SetColor(10);
		if (select==0){
			emp[count]=AddEmployee();
			count++;
		}else if (select==1){
			DisplayEmployee(emp);
		}
		
	}while(select!= 2);
	
	return 0;
}

