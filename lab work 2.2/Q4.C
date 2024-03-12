#include<stdio.h>
#include<conio.h>

main()
{

	int p , r , t ;

	clrscr();
	printf("Enter Principal Amount :");
	scanf("%d",p);
	printf("Enter Rate Of Interest :");
	scanf("%d",r);
	printf("Enter Period Of Time :");
	scanf("%d",t);
	printf("Simple Interest:%d",p*r*t/100);
	getch();
}