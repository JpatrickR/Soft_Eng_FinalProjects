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
}
void view loan()
{
}
void pay loan() 
{

void pay_loan()
{
	prof in;
	prof x[8];
	char id[10];

	int i, l, a;

	printf("ID#: ");	scanf("%s",id);
	sprintf(buf,"%s%s%s",path1,id,".txt");
	p1 = fopen(buf,mode2);
	if(p1 == NULL)
	{
		printf("Account not found");
	}
	else
	{
		fread(&in,sizeof(in),1,p1);
			fread(&in,sizeof(in),1,p1);
			if (feof(p1) !=0)
			{
				printf("ID#: %s\n", in.id);
				printf("Student Name: %s\n", in.name);
				printf("Degree: %s\n", in.degree);
			}
		printf("\nPay balance?");
		printf("\n0. No\n1. Pay all balance");
		printf("Choice: ");	scanf("%d",&a);

		if (a == 0)
		{
			printf("You have selected <no>");
		}
			else if (a == 1)
		{
			printf("\nRe-enter ID#: ");	scanf("%d");
			sprintf(buf,"%s%s%s",path3,id,".txt");
			p3 = fopen(buf,mode1);
			printf("Paying all balance...");
				for (i = 0; i < 8; i++)
				{
					strcpy(x[i].remarks,"PAID\n");
					fprintf(p3,"%s",x[i].remarks);
				}
			printf("Balance is fully paid...");
			fclose(p3);
		}
	}
	fclose(p1);

}

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