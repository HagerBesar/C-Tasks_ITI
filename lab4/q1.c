#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char fname[30],lname[30] ,full[40];
	printf("Enter your frist Name : ");
	gets(fname);
//	gets(fname);
	printf("\nEnter your frist Name : ");
	gets(lname);
	
	strcat(fname," ");
	strcat(fname,lname);
	
//	strcat(full,fname);
//	strcat(full," ");
//	strcat(full,lname);

	printf("\n Full Name : %s",fname);
	
	return 0;
}
