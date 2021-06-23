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
	prof in;
	prof x[];
	char id[5];

	int i,l;

	printf("Student ID#: ");	scanf("%s",id);
	sprintf(buf,"%s%s%s",path1,id,".txt");

	p1 = fopen(buf,mode2);
	if (p1 == NULL)
	{
		printf("ERROR!...(😣)");
	}
		else
	{
		fread(&in,sizeof(in),1,p1);
			if (feof(p1) !=0)
			{
		printf("ID#: %s\n", in.id);
		printf("Student Name: %s\n", in.name);
		printf("Degree: %s\n", in.degree);
	}
	}
	fclose(p1);

	printf("Re-enter ID#: ");	scanf("%s",id);
	sprintf(buf,"%s%s%s",path2,id,".txt");

	p2 = fopen(buf,mode2);
	if (p2 == NULL)
	{
		printf("ERROR!");
	}
		else
	{
		fread(&in,sizeof(in),1,p2);
		fscanf(p2,"%d",&in.loan);
		fscanf(p2,"%d",&in.rate);
		fscanf(p2,"%d",&in.week);
		fscanf(p2,"%d",&in.gross);
		fscanf(p2,"%d",&in.pay);

		printf("\nLoan Amount: %d", in.loan);
		printf("\nLoan Rate: %f", in.rate);
		printf("\nWeeks: %f", in.week);
		printf("\nTotal Amount: %.2f", in.gross);
		printf("\nWeekly Payable Amount: %.2f", in.pay);
		getch();

	}

	printf("\nRe-enter ID#: ");	scanf("%s",id);
	sprintf(buf,"%s%s%s",path3,id,".txt");
	p3 = fopen(buf,mode2);
	l = 1;
	printf("\n<<<Payment Status>>>");
	printf("\n	WEEK	STATUS");
		for(i = 0; i < 8; i++)
		{
			fscanf(p3,"%s",x[i].remarks);
			printf(" \n	%d	%s",l+i,x.remarks);
		}
	fclose(p3);

	fclose(p2);
}

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