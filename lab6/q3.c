#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct point {
	int x;
	int y;
}point; 

typedef struct line {
	point p1;
	point p2;
}line; 

void change_Position(line *L, int newX, int newY){
	L->p1.x=newX;
	L->p1.y=newY;
}

int main(){
	int x,y ,len;
	line l={{1,2},{3,6}};
	printf("enter new Position P1 : ");
	scanf("%d %d",&x , &y);
	change_Position(&l,x,y);
	len = sqrt(pow((l.p1.x - l.p2.x),2) + pow((l.p1.y - l.p2.y),2));
	printf("New Position : p1(%d,%d) p2(%d,%d)",l.p1.x , l.p1.y , l.p2.x , l.p2.y);
	
	printf( "\nLength = %d" , len);

	return 0;
}
