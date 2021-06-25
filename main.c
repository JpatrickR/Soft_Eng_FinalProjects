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
    sprintf(buf,"%s%s%s",path2,id2,".txt");

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
	    p2 = fopen(buf,mode1);
	    if (p2 == NULL)
	    {
		    printf("Error!...");
	       }
		else
	       {
		printf("Loan: ");   scanf("%d",&in.loan);
		printf("\nInterest Rate: %f",in.rate);
		printf("\nWeek Terms: %.2f", in.week);
		    in.interest = in.loan * in.rate;
		printf("\nInterest Amount: %.2f", in.interest);
		    in.gross = in.loan + in.interest;
		printf("\nTotal Gross: %.2f", in.gross);
		    in.pay = in.gross / in.week;
			printf("\nWeekly Payable Balance: %f",in.pay);
		fwrite(&in,sizeof(in),1,p2);
	    }
	    fclose(p2);

			printf("\nRe-enter ID#: ");	scanf("%s",id3);
			sprintf(buf,"%s%s%s",path3,id3,".txt");

			p3 = fopen(buf,mode1);
			if (p3 == NULL)
			{
				printf("Error Making Chart!");
			}
				else
			{
				for(i = 0; i < 8; i++)
				{
					strcpy(x[i].remarks,"UNPAID\n");
					fprintf(p3,"%s",x[i].remarks);
				}
			}
			fclose(p3);
    }
    fclose(p1);

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