#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define up 72
#define down 80
#define home 71
#define end 79
#define enter 13
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
	int select=1,i;
	char ch,r;
	char menu[5][10]={"Home","Python","Dart","C++","Exit"};

	do{
		select=0;
		do{
			system("cls");
			for(i=0 ; i<5 ; i++){
				if(i==select){SetColor(10);}
				printf("\n - %s \n",menu[i]);
				SetColor(15);
			}
			
			ch = getch();
			if(ch == -32){
				ch = getch();
				if(ch==up){
					if(select!=0){select-=1;}else{select=4;}
				}else if(ch==down){
					if(select!=4){select+=1;}else{select=0;}
				}else if(ch==home){
					select=0;
				}else if(ch==end){
					select=4;
				}
			}
		}while(ch!=enter);
		system("cls");
//		printf("select : %d",select);
		for(i=0 ; i<5 ; i++){
			if (i == select){
				SetColor(10);
				printf("\n - %s \n",menu[i]);
			}
		}
		if(select= 4){break;}
		r = getch();
	    system("cls");
	}while(select!= 4);
	
	
	
	
	
	return 0;
}

