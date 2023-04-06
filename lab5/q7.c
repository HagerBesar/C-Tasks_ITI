#include <stdio.h>
#include <stdlib.h>

typedef struct Date {
	int day;
	int manth;
	int year;
}Date;

 
 
int main(){
	Date d1;
	Date d2;
	
	printf("enter bate1 : ");
	scanf("%d",&d1.day);
	scanf("%d",&d1.manth);
	scanf("%d",&d1.year);
	
	printf("enter bate2 : ");
	scanf("%d",&d2.day);
	scanf("%d",&d2.manth);
	scanf("%d",&d2.year);
	
	if(d1.day> d2.day)
    {
        d2.day += 30;
        d2.manth--;
    }

    if(d1.manth> d2.manth)
    {
        d2.manth += 12;
        d2.year--;
    }
	
	printf("\n Difference : %dyear %dmanth %dday",d2.year-d1.year, d2.manth-d1.manth , d2.day-d1.day);

}
