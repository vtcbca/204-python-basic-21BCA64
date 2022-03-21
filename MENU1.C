/*write a menudriven program to perform following task using different function catagory*/
#include<stdio.h>
#include<conio.h>
void addition();
void subtraction(int,int);
int division();
int modulas(int,int);
int menu();

void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
	c=menu(c);
	switch(c)
	{
		case 1: addition();
			break;
		case 2:
			printf("\nEnter 2 value:");
			scanf("%d%d",&x,&y);
			subtraction(x,y);
			break;
		case 3: div=division();
			printf("\n division is:%d",div);
			break;
		case 4:
			printf("Enter 2 value:");
			scanf("%d%d",&c,&y);
			div=modulas(x,y);
			printf("modulas of %d & %d is %d",x,y,div);
			break;
		case 5:exit(0);
		default:
			printf("invalid input");
	}
	printf("\n\n\tDo you want to continue?(Yes=Y/y,No=N/n):");
	flushall();
	scanf("%c",&yn);
	}
	while(yn=='Y'||yn=='y');
	getch();
}
int menu()
{
	int choice;
	printf("\nMenu");
	printf("\n-------------------\n");
	printf("\n1.Addition\n2.subtraction\n3.Division\n4.modulas\n5.exit");
	printf("\n---------------------------\n");
	printf("\n\tEnter Your Choice:");
	scanf("%d",&choice);
	return(choice);
}
void addition()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("\nAddition of %d & %d is %d",x,y,x+y);
}
void subtraction(int x,int y)
{
	printf("Subtraction of %d & %d is %d",x,y,x-y);
}
int division()
{
	int x,y;
	scanf("%d%d",&x,&y);
	return(x/y);
}
int modulas(int x,int y)
{
	return x%y;
}


