#include <stdio.h>
#include <stdlib.h>

typedef struct point {
	int x;
	int y;
}point; 

typedef struct line {
	point p1;
	point p2;
}line;   

void displays_length(line *l,int size){
	int len,i;
	for(i=0 ; i<size ;i++){
		len = sqrt(pow((l[i].p1.x-l[i].p2.x),2) + pow((l[i].p1.y - l[i].p2.y),2));
		printf( "\nLength of line %d = %d" ,i+1, len);
	}
	
}

int main(){
	
	int count,i;
	printf("enter num of lines : ");
	scanf("%d",&count);
	line *p =(line *)malloc(count * sizeof(line));
	
	for(i=0 ; i<count ;i++){
		printf("\nenter Position of line %d : ",i+1);
		printf("\nenter Position P1 : ");
		scanf("%d %d",&p[i].p1.x , &p[i].p1.y);
		printf("enter Position P2 : ");
		scanf("%d %d",&p[i].p2.x , &p[i].p2.y);
	}
	
	displays_length(p,count);

	return 0;
}
