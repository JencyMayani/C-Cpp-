#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("Press M For Monday\n");
	printf("Press T For Tuesday\n");
	printf("Press W For Wednesday\n");
	printf("Press t For Thrusday\n");
	printf("Press F For Friday\n");
	printf("Press S For Saturday\n");
	printf("Press s For Sunday\n");
	printf("Enter Your Choice");
	scanf("%c",&ch);
	switch(ch)
		case M :
			clrscr();
			printf("Monday");
			break;
		case T :
			clrscr();
			printf("Tuesday");
			break;
		case W :
			clrscr();
			printf("Wednesday");
			break;
		case t :
			clrscr();
			printf("Thrusday");
			break;
		case F:
			clrscr();
			printf("Friday");
			break;
		case S:
			clrscr();
			printf("Saturday");
			break;
		case s:
			clrscr();
			printf("Sunday");
			break;
	default:
		printf("Invalid Choice");
	getch();
}