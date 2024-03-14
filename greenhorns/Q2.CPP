#include<stdio.h>
#include<conio.h>
main()
{
	int bs,hra,da,ta;
	clrscr();
	printf("Enter Base Salary: ",bs);
	scanf("%d",&bs);
	hra = bs*10/100;
	da = bs*5/100;
	ta = bs*8/100;
	printf("Gross Salary :%d", bs+hra+da+ta);
	getch();






}