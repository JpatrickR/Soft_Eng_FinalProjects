#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


typedef struct prof
{
    char id[10];
    char name[100];
    char degree[100];
    char remarks[100];
    char tmp[100];
    int loan;
    float week;
    float rate;
    float gross;
    float pay;
    float interest;
}prof;

FILE *p1, *p2, *p3;
    char *path1 = {"C://TurboC3//BIN//LP//a//"};
    char *path2 = {"C://TurboC3//BIN//LP//b//"};
	char *path3 = {"C://TurboC3//BIN//LP//c//"};
    char *mode1 = {"wb"};
    char *mode2 = {"rb"};
	char *mode3 = {"ab"};
    char buf[100];

void start loan()
{
    prof in;
    prof  x[8];
    char id[10];
    char id2[10];
	char id3[10];

	int i , l;

    in.rate = 0.05;
    in.week = 8.0;

    printf("\nStudent ID#: "); scanf("%s",id);
    sprintf(buf,"%s%s%s",path1,id,".txt");

    p1 = fopen(buf,mode2);
    if (p1 == NULL)
	{
	    printf("\nNo account found...");
	}
	    else
	{
	    printf("\n Account Found!);
	    printf("\nConfirm ID#: "); 
	    scanf("%s", id);	
	    sprintf(buf,"%s%s%s",path2,id,".txt");
	}

}
void view loan()
{
}
void pay loan() 
{
}
void menu()
{
}

int main(void)
{
    menu();

    getch();
    return 0;
}